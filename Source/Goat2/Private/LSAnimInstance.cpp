#include "LSAnimInstance.h"

ULSAnimInstance::ULSAnimInstance() {
    this->TurnMontageSlotName = TEXT("TurnInPlace");
    this->FlailAlphaCurve = NULL;
    this->LandAlphaCurve = NULL;
    this->FlailBlendSpeed = 4.00f;
    this->DeltaDistanceForTeleport = 100.00f;
    this->MaxPlayRate = 1.50f;
    this->GetUpFromBack = NULL;
    this->GetUpFromFront = NULL;
    this->GetUpFromLeftSide = NULL;
    this->GetUpFromRightSide = NULL;
    this->AdditiveLandAnimation = NULL;
}

void ULSAnimInstance::OnViewModeChanged(ELSViewMode NewMode, ULSCharacterMovementComponent* MovementComp) {
}

void ULSAnimInstance::OnUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void ULSAnimInstance::OnTurnInPlaceTriggered(ULSCharacterMovementComponent* MovementComp, float DeltaAngle) {
}

void ULSAnimInstance::OnStanceChanged(ELSStance NewStance, ULSCharacterMovementComponent* MovementComp) {
}

void ULSAnimInstance::OnRotationModeChanged(ELSRotationMode NewMode, ULSCharacterMovementComponent* MovementComp) {
}

void ULSAnimInstance::OnRagdolling(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void ULSAnimInstance::OnMovementSpeedChanged(ULSCharacterMovementComponent* MovementComp) {
}

void ULSAnimInstance::OnMovementModeChanged(TEnumAsByte<EMovementMode> NewMode, TEnumAsByte<EMovementMode> PrevMode, uint8 NewCustomMode, uint8 PrevCustomMode, ULSCharacterMovementComponent* MovementComp) {
}

void ULSAnimInstance::OnGaitChanged(ELSGait NewGait, ULSCharacterMovementComponent* MovementComp) {
}

void ULSAnimInstance::OnFinishStandingUp(ULSCharacterMovementComponent* MovementComp, ACharacter* Character) {
}

void ULSAnimInstance::OnAimingChanged(bool bIsAimingNow, ULSCharacterMovementComponent* MovementComp) {
}

FLSAnimInstanceProxy ULSAnimInstance::GetProxyRef(bool& OutIsValid) const {
    return FLSAnimInstanceProxy{};
}


