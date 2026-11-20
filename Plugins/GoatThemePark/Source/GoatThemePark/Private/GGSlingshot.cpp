#include "GGSlingshot.h"
#include "CableComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/AudioComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GGRadialForceComponent.h"
#include "Net/UnrealNetwork.h"

AGGSlingshot::AGGSlingshot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->SlingshotMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SlingshotMeshComponent"));
    this->LeftCable = CreateDefaultSubobject<UCableComponent>(TEXT("LeftCable"));
    this->RightCable = CreateDefaultSubobject<UCableComponent>(TEXT("RightCable"));
    this->LaunchArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("LaunchArrow"));
    this->PouchMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PouchMeshComponent"));
    this->ProjectileArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ProjectileArrow"));
    this->PhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsConstraint"));
    this->RadialForceComponent = CreateDefaultSubobject<UGGRadialForceComponent>(TEXT("RadialForceComponent"));
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->RubberBandAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("RubberBandAudioComponent"));
    this->ControllingGoat = NULL;
    this->FiringProjectile = NULL;
    this->SpawnSound = NULL;
    this->SpawnParticleSystem = NULL;
    this->LaunchSound = NULL;
    this->LaunchParticleSystem = NULL;
    this->PulledRubberBandSound = NULL;
    this->PulledRubberBandParticleSystem = NULL;
    this->HoldPouchSocket = TEXT("LickLocationSocket");
    this->TailPouchSocket = TEXT("TailSocket");
    this->AssPouchSocket = TEXT("AssSocket");
    this->MaxPullDistance = 1000.00f;
    this->MinSpeed = 700.00f;
    this->MaxSpeed = 5000.00f;
    this->MaxLaunchAngle = 90.00f;
    this->SlingshotRisingSpeed = 300.00f;
    this->PouchSpringConstant = 100.00f;
    this->LimitCableElongationMultiplier = 0.30f;
    this->TargetYaw = 0.00f;
    this->CurrentPullDistance = 0.00f;
    this->PullPower = 0.00f;
    this->LaunchSpeed = 0.00f;
    this->PlayerViewPointPitch = 0.00f;
    this->PouchSpringDamping = 0.00f;
    this->bIsHolding = false;
    this->bIsReadyLaunch = false;
    this->IKCollisionResponse = ECR_Ignore;
    this->CurrentState = ESlingshotState::None;
    this->LaunchArrow->SetupAttachment(SlingshotMeshComponent);
    this->LeftCable->SetupAttachment(SlingshotMeshComponent);
    this->PhysicsConstraint->SetupAttachment(PouchMeshComponent);
    this->PouchMeshComponent->SetupAttachment(SlingshotMeshComponent);
    this->ProjectileArrow->SetupAttachment(PouchMeshComponent);
    this->RadialForceComponent->SetupAttachment(SlingshotMeshComponent);
    this->RightCable->SetupAttachment(SlingshotMeshComponent);
    this->RubberBandAudioComponent->SetupAttachment(PouchMeshComponent);
    this->SlingshotMeshComponent->SetupAttachment(RootComponent);
    this->SphereComponent->SetupAttachment(SlingshotMeshComponent);
    this->SplineComponent->SetupAttachment(SlingshotMeshComponent);
}

void AGGSlingshot::UpdateTrajectorySpline(float DeltaTime) {
}

void AGGSlingshot::UpdateSlingshotRotation() {
}

void AGGSlingshot::UpdatePouchTransform(float DeltaTime) {
}

void AGGSlingshot::SetFiringProjectile(AActor* NewProjectile) {
}

void AGGSlingshot::SetCurrentState(ESlingshotState NewState) {
}

void AGGSlingshot::SetControllingGoat(AGGGoat* NewControlling) {
}

void AGGSlingshot::SetConstraintPositions(const FVector PosFrame1, const FVector PosFrame2) {
}

void AGGSlingshot::ServerUpdatePlayerViewPointPitch_Implementation(float ViewPointPitch) {
}


void AGGSlingshot::OnRep_FiringProjectile() {
}

void AGGSlingshot::OnRep_CurrentState() {
}

void AGGSlingshot::OnRep_ControllingGoat() {
}


void AGGSlingshot::OnCharacterRespawned(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter) {
}

void AGGSlingshot::MulticastUpdateSlingshotPositions_Implementation(float NewSlingshotYaw, FTransform NewPouchTransform) {
}

void AGGSlingshot::MulticastUpdatePlayerViewPointPitch_Implementation(float ViewPointPitch) {
}

void AGGSlingshot::MulticastUpdateConstraintPositions_Implementation(const FVector PosFrame1, const FVector PosFrame2) {
}

void AGGSlingshot::MulticastSetSlingshotInUse_Implementation(AGGSlingshot* SlingshotInUse, AGGGoat* Goat) {
}

void AGGSlingshot::MulticastPlaySpawnHapticsAndEffects_Implementation() {
}

void AGGSlingshot::MulticastPlayPullHapticsAndEffects_Implementation() {
}

void AGGSlingshot::MulticastPlayLaunchHapticsAndEffects_Implementation() {
}

void AGGSlingshot::MulticastBreakConstraint_Implementation() {
}

void AGGSlingshot::Launch_Implementation(AActor* Launcher) {
}

bool AGGSlingshot::IsCurrentlyInUse_Implementation() const {
    return false;
}

ESlingshotState AGGSlingshot::GetCurrentState() const {
    return ESlingshotState::None;
}


bool AGGSlingshot::CanLaunch_Implementation() const {
    return false;
}

void AGGSlingshot::CalculateImpulse() {
}

void AGGSlingshot::AddDragResistance() {
}

void AGGSlingshot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGSlingshot, ControllingGoat);
    DOREPLIFETIME(AGGSlingshot, FiringProjectile);
    DOREPLIFETIME(AGGSlingshot, DefaultPouchTransform);
    DOREPLIFETIME(AGGSlingshot, TargetYaw);
    DOREPLIFETIME(AGGSlingshot, PouchTransform);
    DOREPLIFETIME(AGGSlingshot, PullPower);
    DOREPLIFETIME(AGGSlingshot, PlayerViewPointPitch);
    DOREPLIFETIME(AGGSlingshot, ConstraintRefPosFrame1);
    DOREPLIFETIME(AGGSlingshot, ConstraintRefPosFrame2);
    DOREPLIFETIME(AGGSlingshot, bIsHolding);
    DOREPLIFETIME(AGGSlingshot, CurrentState);
}


