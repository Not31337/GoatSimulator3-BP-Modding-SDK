#include "LSAnimInstance_PostProcess.h"

ULSAnimInstance_PostProcess::ULSAnimInstance_PostProcess() {
    this->Animations = NULL;
    this->AimOffsetDeadAngle = 140.00f;
    this->RagdollBlendOutTime = 0.50f;
    this->RagdollBlendOutTimeWhileFlying = 1.00f;
    this->AirLeanAlpha = 0.00f;
    this->AimOffsetAlpha = 0.00f;
    this->bIsRagdoll = false;
    this->RootBoneAdjustmentAlpha = 0.00f;
}

void ULSAnimInstance_PostProcess::OnUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void ULSAnimInstance_PostProcess::OnRagdolling(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void ULSAnimInstance_PostProcess::OnFinishStandingUp(ULSCharacterMovementComponent* MovementComp, ACharacter* Character) {
}

float ULSAnimInstance_PostProcess::GetUnRagdollBlendTime() const {
    return 0.0f;
}


