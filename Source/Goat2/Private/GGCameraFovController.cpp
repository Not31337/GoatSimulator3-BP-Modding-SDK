#include "GGCameraFovController.h"

UGGCameraFovController::UGGCameraFovController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->TargetCamera = NULL;
    this->FovAnimData = NULL;
}

bool UGGCameraFovController::SetTargetFov(float TargetFov, float FovAnimLength, float FovAnimStartDelay, TEnumAsByte<EEasingFunc::Type> FovAnimEaseCurve, bool bDoInterrupt) {
    return false;
}

void UGGCameraFovController::SetTargetCamera(UCameraComponent* NewTargetCamera) {
}

void UGGCameraFovController::ResetTargetFov(float FovAnimLength, float FovAnimStartDelay, TEnumAsByte<EEasingFunc::Type> FovAnimEaseCurve) {
}

float UGGCameraFovController::GetInitialFov() const {
    return 0.0f;
}


