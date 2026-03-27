#include "LSBaseAnimInstance.h"

ULSBaseAnimInstance::ULSBaseAnimInstance() {
    this->CurveEnableLeftHandIK = TEXT("EnableLeftHandIK");
    this->CurveEnableRightHandIK = TEXT("EnableRightHandIK");
    this->CurveLayeringArmLeft = TEXT("Layering_ArmLeft");
    this->CurveLayeringArmRight = TEXT("Layering_ArmRight");
    this->RotateInPlaceAngleThreshold = 5.00f;
    this->CurveEnableTransition = TEXT("EnableTransition");
    this->Turn180Threshold = 130.00f;
    this->CurveTurnRotationSpeed = TEXT("RotationSpeed");
    this->DistanceToTriggerTransition = 8.00f;
    this->AngleToTriggerTransition = 45.00f;
    this->DynamicTransitionLeft = NULL;
    this->DynamicTransitionRight = NULL;
    this->GetUpFromBack = NULL;
    this->GetUpFromFront = NULL;
    this->GetUpFromLeftSide = NULL;
    this->GetUpFromRightSide = NULL;
    this->bUseConstantInterpSpeedForLookAtLocation = false;
    this->LookAtLocationConstantInterpSpeed = 180.00f;
    this->LookAtLocationInterpSpeed = 4.00f;
    this->AnimatedCrouchSpeed = 150.00f;
    this->MaxStumbleTime = 0.60f;
    this->DeltaDistanceForTeleport = 100.00f;
    this->bEnableHandIK = true;
    this->GroundedSlot = TEXT("Grounded");
    this->HeadBone = TEXT("Head");
    this->LODThresholdDynamicTransition = 1;
    this->RootBoneAdjustmentAlpha = 0.00f;
    this->LastActiveTurnAnimation = NULL;
}

void ULSBaseAnimInstance::OnViewModeChanged(ELSViewMode NewMode, ULSCharacterMovementComponent* MovementComp) {
}

void ULSBaseAnimInstance::OnUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void ULSBaseAnimInstance::OnTurnInPlaceTriggered(ULSCharacterMovementComponent* MovementComp, float DeltaAngle) {
}

void ULSBaseAnimInstance::OnStumbled(UGGCharacterPushComponent* Stumbled, AActor* Pusher, float Speed, FVector Direction) {
}

void ULSBaseAnimInstance::OnStanceChanged(ELSStance NewStance, ULSCharacterMovementComponent* MovementComp) {
}

void ULSBaseAnimInstance::OnRotationModeChanged(ELSRotationMode NewMode, ULSCharacterMovementComponent* MovementComp) {
}

void ULSBaseAnimInstance::OnRagdolling(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void ULSBaseAnimInstance::OnPushed(UGGCharacterPushComponent* Pushed, FVector Velocity) {
}

void ULSBaseAnimInstance::OnMovementModeChanged(TEnumAsByte<EMovementMode> NewMode, TEnumAsByte<EMovementMode> PrevMode, uint8 NewCustomMode, uint8 PrevCustomMode, ULSCharacterMovementComponent* MovementComp) {
}

void ULSBaseAnimInstance::OnGaitChanged(ELSGait NewGait, ULSCharacterMovementComponent* MovementComp) {
}

void ULSBaseAnimInstance::OnFinishStandingUp(ULSCharacterMovementComponent* MovementComp, ACharacter* Character) {
}

bool ULSBaseAnimInstance::IsInAir() const {
    return false;
}

bool ULSBaseAnimInstance::IsGrounded() const {
    return false;
}


