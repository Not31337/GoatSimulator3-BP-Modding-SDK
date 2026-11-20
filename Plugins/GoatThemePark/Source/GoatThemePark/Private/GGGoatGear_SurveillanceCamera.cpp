#include "GGGoatGear_SurveillanceCamera.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_SurveillanceCamera::UGGGoatGear_SurveillanceCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasPassiveEffect = true;
    this->SurveillanceCameraMesh = NULL;
    this->CameraHeadBoneName = TEXT("Camera_head");
    this->CameraAimSocket = TEXT("CameraAimSocket");
    this->TargetDetectionRadius = 1000.00f;
    this->TargetSwitchDelay = 1.00f;
    this->CameraRotationInterpSpeed = 5.00f;
    this->bGearActive = false;
    this->IdleLoopSound = NULL;
    this->RotatingLoopSound = NULL;
    this->RotatingEndSound = NULL;
    this->AlertSound = NULL;
    this->MaxCameraAngularSpeed = 0.00f;
    this->TargetedParticleSystem = NULL;
    this->ClosestTarget = NULL;
    this->PrevClosestTarget = NULL;
    this->CurrentState = ESurveillanceCameraState::Default;
    this->SurveillanceCameraMeshComponent = NULL;
    this->SurveillanceCameraAudioComponent = NULL;
}

void UGGGoatGear_SurveillanceCamera::SetCurrentState(ESurveillanceCameraState NewState) {
}

void UGGGoatGear_SurveillanceCamera::OnRep_GearActive() {
}

void UGGGoatGear_SurveillanceCamera::OnRep_CurrentState() {
}

void UGGGoatGear_SurveillanceCamera::OnCameraSoundFinished() {
}

FRotator UGGGoatGear_SurveillanceCamera::GetNextCameraRotation() const {
    return FRotator{};
}

ESurveillanceCameraState UGGGoatGear_SurveillanceCamera::GetCurrentState() const {
    return ESurveillanceCameraState::Default;
}

void UGGGoatGear_SurveillanceCamera::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_SurveillanceCamera, bGearActive);
    DOREPLIFETIME(UGGGoatGear_SurveillanceCamera, ClosestTarget);
    DOREPLIFETIME(UGGGoatGear_SurveillanceCamera, CurrentState);
    DOREPLIFETIME(UGGGoatGear_SurveillanceCamera, NextCameraRotation);
    DOREPLIFETIME(UGGGoatGear_SurveillanceCamera, CameraOffset);
}


