#include "GGFlyingBroomAnimInstance.h"

UGGFlyingBroomAnimInstance::UGGFlyingBroomAnimInstance() {
    this->MaxRollAngle = 80.00f;
    this->YawRateForMaxRoll = 90.00f;
    this->RotationInterpSpeed = 2.00f;
    this->VerticalBobbingSpeed = 20.00f;
    this->VerticalBobbingMaxHeight = 20.00f;
    this->SitDownSpringForce = 20.00f;
    this->ReleaseDuration = 0.50f;
    this->PutAwayDuration = 0.50f;
    this->BoneOffsetAlphaAnim = 0.00f;
    this->Broom = NULL;
    this->bIsSimulatingPhysics = false;
}

void UGGFlyingBroomAnimInstance::OnGoatExitBroom(AGGGoat* Goat, bool bIsDriver) {
}

void UGGFlyingBroomAnimInstance::OnGoatEnteredBroom(AGGGoat* Goat, bool bIsDriver) {
}

void UGGFlyingBroomAnimInstance::OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat) {
}

void UGGFlyingBroomAnimInstance::AnimNotify_SatDown() {
}


