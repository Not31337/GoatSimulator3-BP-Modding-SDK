#include "GGPhysicsActor_BalloonHolder.h"
#include "CableComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

AGGPhysicsActor_BalloonHolder::AGGPhysicsActor_BalloonHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_Awake;
    this->Tags.AddDefaulted(1);
    this->bCanBeHeadbutted = false;
    this->bCanBeOptimized = false;
    this->bCanChangeTickRate = false;
    this->PhysHandle = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysHandle"));
    this->PhysHandleReverse = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysHandleReverse"));
    this->Cable = CreateDefaultSubobject<UCableComponent>(TEXT("Cable"));
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapSphere"));
    this->BalloonOverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("BalloonOverlapSphere"));
    this->HeldBalloonClass = NULL;
    this->bAutoCreateBalloon = true;
    this->BalloonPhysMaterial = NULL;
    this->BalloonFloatDistance = 200.00f;
    this->RotationInterpSpeed = 2.00f;
    this->UprightTorqueStrength = 25.00f;
    this->UprightTorqueDamping = 10.00f;
    this->BalloonInflateTime = 0.00f;
    this->VerticalForceWhileInflating = 0.00f;
    this->AutoPopAfterTimeInFreeFloat = 25.00f;
    this->AutoPopHeightInFreeFloat = 5000.00f;
    this->StratosphereHeight = 30000.00f;
    this->FreeFloatRoamDuration = 10.00f;
    this->BalloonPActor = NULL;
    this->bUseAttachBoneForSyringeEffect = false;
    this->SyringeDuration = 120.00f;
    this->SyringeNumRequiredForFloating = 3;
    this->SyringeNPCFloatingForce = 1000.00f;
    this->SyringeNPCAddPitch = 0.20f;
    this->SyringePActorGravity = 20000.00f;
    this->SyringePActorMaxVelocity = 500.00f;
    this->SyringePActorAddGravityMultiplier = 1.50f;
    this->SyringeVehicleGravity = 250000.00f;
    this->SyringeVehicleMaxVelocity = 500.00f;
    this->SyringeVehicleAddGravityMultiplier = 4.00f;
    this->FreeFloatStartTime = 0.00f;
    this->FreeFloatStartHeight = 339999995214436424907732413799364296704.00f;
    this->BalloonInflateStartTime = -1.00f;
    this->LostNPC = NULL;
    this->SyringeActor = NULL;
    this->BalloonOverlapSphere->SetupAttachment(RootComponent);
    this->Cable->SetupAttachment(RootComponent);
    this->OverlapSphere->SetupAttachment(RootComponent);
}

void AGGPhysicsActor_BalloonHolder::SpawnDefaultBalloon() {
}

bool AGGPhysicsActor_BalloonHolder::SetBalloonOverride(TSoftObjectPtr<UStaticMesh> OverrideMesh, TSoftObjectPtr<UMaterialInterface> OverrideMaterial) {
    return false;
}

void AGGPhysicsActor_BalloonHolder::OnRep_BalloonPActor() {
}

void AGGPhysicsActor_BalloonHolder::OnBalloonShattered(AGGPhysicsActor* Balloon) {
}

void AGGPhysicsActor_BalloonHolder::OnBalloonReleasedActor(AActor* Actor) {
}

void AGGPhysicsActor_BalloonHolder::OnBalloonCatchedActor(AActor* Actor) {
}

void AGGPhysicsActor_BalloonHolder::OnBalloonBeingDestroyed(AActor* Balloon, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AGGPhysicsActor_BalloonHolder::MulticastOnStratosphereAchievementTriggered_Implementation(AGGGoat* GoatInBalloon, AActor* Balloon) {
}

void AGGPhysicsActor_BalloonHolder::MulticastOnInstinctTriggered_Implementation(AGGGoat* LickingGoat) {
}

void AGGPhysicsActor_BalloonHolder::MulticastDetachBalloonFromComponent_Implementation() {
}

void AGGPhysicsActor_BalloonHolder::MulticastAttachToTarget_Implementation(AActor* Target, FName AttachBone, FName SyringeBone, FVector_NetQuantize100 AttachOffset) {
}

void AGGPhysicsActor_BalloonHolder::MulticastAttachBalloonToComponent_Implementation(USceneComponent* Parent, FName SocketName) {
}

void AGGPhysicsActor_BalloonHolder::DetachBalloonFromComponent() {
}

void AGGPhysicsActor_BalloonHolder::AttachBalloonToComponent(USceneComponent* Parent, FName SocketName) {
}

void AGGPhysicsActor_BalloonHolder::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPhysicsActor_BalloonHolder, BalloonInflateTime);
    DOREPLIFETIME(AGGPhysicsActor_BalloonHolder, VerticalForceWhileInflating);
    DOREPLIFETIME(AGGPhysicsActor_BalloonHolder, BalloonPActor);
    DOREPLIFETIME(AGGPhysicsActor_BalloonHolder, FreeFloatStartTime);
    DOREPLIFETIME(AGGPhysicsActor_BalloonHolder, FreeFloatStartHeight);
    DOREPLIFETIME(AGGPhysicsActor_BalloonHolder, BalloonInflateStartTime);
    DOREPLIFETIME(AGGPhysicsActor_BalloonHolder, SyringeActor);
    DOREPLIFETIME(AGGPhysicsActor_BalloonHolder, RoamDirection);
}


