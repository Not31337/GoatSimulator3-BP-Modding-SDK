#include "GGCameraDrone.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGCameraDrone::AGGCameraDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bResetOnEndPlay = false;
    this->DroneMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Drone Mesh"));
    this->FlyingAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Flying Audio"));
    this->TrailParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Trail Particle"));
    this->CameraControlDelay = 1.00f;
    this->CameraBlendTime = 0.00f;
    this->ReturnInterpSpeed = 5.00f;
    this->UnfoldMontage = NULL;
    this->FoldMontage = NULL;
    this->OverlayWidgetClass = NULL;
    this->NPCHitsForInstinct = 3;
    this->MaxTimeBetweenHits = 2.00f;
    this->OverlayWidget = NULL;
    this->TrackingVehicle = NULL;
    this->DroneMesh->SetupAttachment(RootComponent);
    this->FlyingAudio->SetupAttachment(RootComponent);
    this->TrailParticle->SetupAttachment(RootComponent);
}

void AGGCameraDrone::VehicleHitNPC(AGGVehicle* Vehicle, AGGNPC* NPC) {
}

void AGGCameraDrone::ServerReturnDrone_Implementation() {
}

void AGGCameraDrone::OnRep_DroneValues() {
}

void AGGCameraDrone::OnGoatOwnerExitedVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void AGGCameraDrone::OnGoatOwnerEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void AGGCameraDrone::MulticastUnfoldDrone_Implementation() {
}

void AGGCameraDrone::MulticastFoldDrone_Implementation() {
}

EDroneState AGGCameraDrone::GetState() const {
    return EDroneState::FoldIdle;
}

void AGGCameraDrone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGCameraDrone, DroneValues);
}


