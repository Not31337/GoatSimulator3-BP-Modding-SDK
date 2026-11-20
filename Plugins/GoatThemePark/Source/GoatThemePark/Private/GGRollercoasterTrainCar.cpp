#include "GGRollercoasterTrainCar.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GGSplineMovementComponent.h"
#include "Net/UnrealNetwork.h"

AGGRollercoasterTrainCar::AGGRollercoasterTrainCar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SplineMovement = CreateDefaultSubobject<UGGSplineMovementComponent>(TEXT("Spline Movement"));
    this->Root = (USceneComponent*)RootComponent;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->ForwardCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Forward Collision Box"));
    this->CarriageCount = 0;
    this->CarriageClassOverride = NULL;
    this->LocomotiveSpacing = 40.00f;
    this->CarriageSpacing = 20.00f;
    this->MinSpeedToRagdollHitCharacters = 200.00f;
    this->DelayBetweenHits = 0.50f;
    this->SidewaysImpulseMultiplicator = 0.50f;
    this->ForwardImpulseVelocityMultiplicator = 1.00f;
    this->SignificanceRange = 5000.00f;
    this->RideTrack = NULL;
    this->Locomotive = NULL;
    this->TrainStopDistance = -1.00f;
    this->ForwardCollisionBox->SetupAttachment(MeshComponent);
    this->MeshComponent->SetupAttachment(RootComponent);
}

bool AGGRollercoasterTrainCar::StopTrainAtLocation(FVector Location) {
    return false;
}

void AGGRollercoasterTrainCar::OnTrainCarriagesSpawned_Implementation() {
}

void AGGRollercoasterTrainCar::OnRep_TrainStopDistance() {
}

void AGGRollercoasterTrainCar::OnRep_Carriages() {
}

void AGGRollercoasterTrainCar::OnNpcReachedTrain(AGGNPC_Humanoid* NPC, AGGRideSeat* Seat, bool bHasReachedSeat) {
}

void AGGRollercoasterTrainCar::MulticastOnStoppedAtLocation_Implementation() {
}

void AGGRollercoasterTrainCar::MulticastOnStartMoving_Implementation() {
}

bool AGGRollercoasterTrainCar::MoveNpcsTowardsAndEnterTrain(TArray<AGGNPC_Humanoid*> NPCs, FGGRollercoasterTrain_SingleDelegate Callback, float SeatAssignTime) {
    return false;
}

void AGGRollercoasterTrainCar::LaunchTrain() {
}

bool AGGRollercoasterTrainCar::IsStoppingAtLocation() const {
    return false;
}

bool AGGRollercoasterTrainCar::IsLocomotive() const {
    return false;
}

bool AGGRollercoasterTrainCar::HasStoppedAtLocation() const {
    return false;
}

AGGRollercoasterTrainCar* AGGRollercoasterTrainCar::GetLocomotiveOrSelfConst() const {
    return NULL;
}

AGGRollercoasterTrainCar* AGGRollercoasterTrainCar::GetLocomotiveOrSelf() {
    return NULL;
}

AGGRollercoasterTrainCar* AGGRollercoasterTrainCar::GetLocomotive() const {
    return NULL;
}

TArray<AGGNPC_Humanoid*> AGGRollercoasterTrainCar::AllNpcsExitTrain() {
    return TArray<AGGNPC_Humanoid*>();
}

void AGGRollercoasterTrainCar::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGRollercoasterTrainCar, Carriages);
    DOREPLIFETIME(AGGRollercoasterTrainCar, Locomotive);
    DOREPLIFETIME(AGGRollercoasterTrainCar, TrainStopDistance);
}


