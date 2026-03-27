#include "GGSandWorm.h"
#include "Components/AudioComponent.h"
#include "Camera/CameraComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GGCharacterPushComponent.h"
#include "GGSandWormMovementComponent.h"
#include "Net/UnrealNetwork.h"

AGGSandWorm::AGGSandWorm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGGSandWormMovementComponent>(TEXT("CharMoveComp"))) {
    this->CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Arm"));
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->PushComponent = CreateDefaultSubobject<UGGCharacterPushComponent>(TEXT("Push Component"));
    //this->OngoingMoveParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Ongoing Move Particles"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->MovementSoundComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Movement Sound"));
    this->MovementSoundComponentCenter = CreateDefaultSubobject<UAudioComponent>(TEXT("Movement Sound Center"));
    this->NumBodyParts = 10;
    this->bShowBodyCollision = false;
    this->HoldTimeForEnteringAsPassenger = 0.50f;
    this->MaxDistanceToEnter = 100.00f;
    this->BodyPartVerticalOffset = -1.00f;
    this->SocketRider = TEXT("DriverSeat_Goat");
    this->SocketPassengers = TEXT("Passenger_Goat");
    this->CameraArmLengthIncrement = 50.00f;
    this->OverlapObjectTypes.AddDefaulted(4);
    this->MouthCenterSocket = TEXT("MouthCenter");
    this->MinSpeedForParticlesWhenPlayerControlled = 400.00f;
    this->MaxCullDistance = 15000.00f;
    this->EjectionForce = 800.00f;
    this->RandomSpinForce = 300.00f;
    this->Driver = NULL;
    this->Camera->SetupAttachment(CameraArm);
    this->CameraArm->SetupAttachment(RootComponent);
    this->MovementSoundComponent->SetupAttachment(RootComponent);
    this->MovementSoundComponentCenter->SetupAttachment(RootComponent);
    //this->OngoingMoveParticles->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void AGGSandWorm::ServerExitVehicleAsDriver_Implementation(FVector Impulse) {
}

void AGGSandWorm::OnRep_Passengers(const TArray<AGGGoat*>& PreviousPassengers) {
}

void AGGSandWorm::OnRep_Driver(AGGGoat* PreviousDriver) {
}

void AGGSandWorm::OnGoatTeleported(AGGCharacter* Character, const FTransform& OldTransform) {
}

void AGGSandWorm::OnGoatRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void AGGSandWorm::OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat) {
}

void AGGSandWorm::MulticastGoatExitedVehicle_Implementation(AGGGoat* Goat, bool bWasDriver, FVector Impulse) {
}

void AGGSandWorm::MulticastGoatEnteredVehicle_Implementation(AGGGoat* Goat, bool bIsDriver) {
}

void AGGSandWorm::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGSandWorm, Driver);
    DOREPLIFETIME(AGGSandWorm, Passengers);
}


