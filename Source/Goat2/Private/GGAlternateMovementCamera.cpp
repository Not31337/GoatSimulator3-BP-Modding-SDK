#include "GGAlternateMovementCamera.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"

AGGAlternateMovementCamera::AGGAlternateMovementCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root Component"));
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
    this->GoatRotationSpeed = 9.00f;
    this->TopDownInterpSpeed = 5.00f;
    this->SideScrollerInterpSpeed = 5.00f;
    this->bUseAsAudioListener = false;
    this->bOffsetAudioListenerToGoatLocation = false;
    this->RotationModeOverride = ELSRotationMode::VelocityDirection;
    this->ClientMaxPositionErrorDistance = 50.00f;
    this->InAirRotationModeOverride = ELSInAirRotationMode::MovementInput;
    this->bOverrideRotationMode = true;
    this->bOverrideInAirRotationMode = true;
    this->bForceViewTargetToThis = true;
    this->bResetOnEndPlay = true;
    this->ControlledPlayer = NULL;
    this->ControlledGoat = NULL;
    this->CameraComponent->SetupAttachment(RootComponent);
}

void AGGAlternateMovementCamera::StartPlayerControl(AGGPlayerController* Player, EAlternateMode AlternateMode, float CameraBlendInTime) {
}

void AGGAlternateMovementCamera::SetStaticCameraLocation(FVector Location, float InterpSpeed) {
}

void AGGAlternateMovementCamera::ResetStaticCameraLocation() {
}

void AGGAlternateMovementCamera::ResetPlayerControl(float CameraBlendOutTime, bool bSetViewTarget) {
}

bool AGGAlternateMovementCamera::IsPlayerControlled() const {
    return false;
}

bool AGGAlternateMovementCamera::HasStaticCameraLocation() const {
    return false;
}

AGGPlayerController* AGGAlternateMovementCamera::GetControllingPlayer() const {
    return NULL;
}


