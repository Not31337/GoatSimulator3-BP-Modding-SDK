#include "GGFlyingBroom.h"
#include "Components/AudioComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GGDynamicAssetHoldingComponent.h"
#include "NiagaraComponent.h"
#include "GGFlyingBroomMovement.h"
#include "Net/UnrealNetwork.h"

AGGFlyingBroom::AGGFlyingBroom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Broom Mesh"));
    this->OurCatcher = NULL;
    this->SoonToBeCatcher = NULL;
    this->BroomMesh = (USkeletalMeshComponent*)RootComponent;
    this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->DynamicAssets = CreateDefaultSubobject<UGGDynamicAssetHoldingComponent>(TEXT("Dynamic Assets"));
    this->TrailParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Trail Particles"));
    this->PassiveSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Passive Sound"));
    this->BroomMovementComponent = CreateDefaultSubobject<UGGFlyingBroomMovement>(TEXT("Broom Movement Component"));
    this->HonkAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Honk Audio Component"));
    this->CrashAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Crash Audio"));
    this->BrakeAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Brake Audio"));
    this->HoldTimeForPuttingBroomAway = 0.25f;
    this->HoldTimeForEnteringAsPassenger = 0.50f;
    this->GracePeriodForThrowingOffPlayersAfterEnteringBroom = 1.00f;
    this->EjectionForce = 800.00f;
    this->RandomSpinForce = 300.00f;
    this->RagdollPhysicsAsset = NULL;
    this->ImpulseMultiplier = 0.03f;
    this->SelfSpinPower = 15.00f;
    this->MaxCameraDistance = 1200.00f;
    this->MinCameraDistance = 200.00f;
    this->CameraDistanceChange = 100.00f;
    this->BoostDeltaFOV = 20.00f;
    this->FovEaseBlendExp = 3.00f;
    this->FovBlendTime = 1.00f;
    this->EnterSound = TEXT("EnterVehicle");
    this->ExitSound = TEXT("ExitVehicle");
    this->bCanBeInteractedWith = true;
    this->bShouldSimulate = false;
    this->Driver = NULL;
    this->Passenger = NULL;
    this->DefaultPhysicsAsset = NULL;
    this->ActiveAnimation = EGGBroomAnimType::None;
    this->BrakeAudio->SetupAttachment(RootComponent);
    this->Camera->SetupAttachment(SpringArm);
    this->CrashAudio->SetupAttachment(RootComponent);
    this->HonkAudioComponent->SetupAttachment(RootComponent);
    this->PassiveSound->SetupAttachment(RootComponent);
    this->SpringArm->SetupAttachment(RootComponent);
    this->TrailParticles->SetupAttachment(RootComponent);
}

void AGGFlyingBroom::ServerSendMovementUpdate_Implementation(FVector_NetQuantize Location, FVector_NetQuantize Velocity, FRotator Rotation, float InputThrottle) {
}

void AGGFlyingBroom::ServerPutBroomAway_Implementation() {
}

void AGGFlyingBroom::ServerPlayHonkSound_Implementation() {
}

void AGGFlyingBroom::ServerExitVehicleAsDriver_Implementation(FVector Impulse) {
}

void AGGFlyingBroom::ServerEjectEveryoneAndStartSimulate_Implementation() {
}

void AGGFlyingBroom::PutBroomAway() {
}

void AGGFlyingBroom::OnRep_ShouldSimulate() {
}

void AGGFlyingBroom::OnRep_Passengers(const TArray<AGGGoat*>& PreviousPassengers) {
}

void AGGFlyingBroom::OnRep_Passenger(AGGGoat* PreviousPassenger) {
}

void AGGFlyingBroom::OnRep_Driver(AGGGoat* PreviousDriver) {
}

void AGGFlyingBroom::OnRep_ActiveAnimation(EGGBroomAnimType OldAnimation) {
}

void AGGFlyingBroom::OnMenuOpened(FGameplayTag InMenuTag, FMenuNavigationContext Context) {
}

void AGGFlyingBroom::OnGoatTeleported(AGGCharacter* Character, const FTransform& OldTransform) {
}

void AGGFlyingBroom::OnGoatRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void AGGFlyingBroom::OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat) {
}

void AGGFlyingBroom::MulticastStartSimulatingAndAddImpulse_Implementation(FVector_NetQuantize LinearImpulse, FVector_NetQuantize AngularImpulse) {
}

void AGGFlyingBroom::MulticastReleaseCatchedActor_Implementation(const FVector& ReleaseLocation, const FGGReleaseOptions& Options) {
}

void AGGFlyingBroom::MulticastPlayHonkSound_Implementation() {
}

void AGGFlyingBroom::MulticastGoatExitedVehicle_Implementation(AGGGoat* Goat, bool bWasDriver, FVector Impulse) {
}

void AGGFlyingBroom::MulticastGoatEnteredVehicle_Implementation(AGGGoat* Goat, bool bIsDriver) {
}

void AGGFlyingBroom::MulticastCrashSound_Implementation(AActor* Actor, float ImpactSize) {
}

void AGGFlyingBroom::MulticastCatchActor_Implementation(AActor* Catcher, const FGGCatchOptions& Options) {
}

void AGGFlyingBroom::MulticastBroomWasRecalled_Implementation() {
}

void AGGFlyingBroom::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGFlyingBroom, OurCatcher);
    DOREPLIFETIME(AGGFlyingBroom, bCanBeInteractedWith);
    DOREPLIFETIME(AGGFlyingBroom, bShouldSimulate);
    DOREPLIFETIME(AGGFlyingBroom, Driver);
    DOREPLIFETIME(AGGFlyingBroom, Passenger);
    DOREPLIFETIME(AGGFlyingBroom, LickedBy);
    DOREPLIFETIME(AGGFlyingBroom, ActiveAnimation);
}


