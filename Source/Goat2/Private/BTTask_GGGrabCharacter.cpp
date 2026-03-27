#include "BTTask_GGGrabCharacter.h"

UBTTask_GGGrabCharacter::UBTTask_GGGrabCharacter() {
    this->NodeName = TEXT("Grab Character");
    this->GrabMontage = NULL;
    this->ConstraintAttachSocket = TEXT("None");
    this->PreventUnragdollFor = 1.50f;
    this->AnimationType = EGrabbedCharacterAnimationType::NGCA_Default;
    this->bLockRotation = true;
    this->bDoOverlapGrab = true;
    this->bRequireHit = false;
    this->DistanceFromCharacter = 90.00f;
    this->Height = 96.00f;
    this->Radius = 100.00f;
    this->bDebugDrawGrab = false;
    this->OwnerBT = NULL;
    this->NPC = NULL;
}

void UBTTask_GGGrabCharacter::OnGGAnimNotifyTrigger(AGGCharacter* NotifyingNPC, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag) {
}

void UBTTask_GGGrabCharacter::OnAnimationEnded(UAnimMontage* Montage, bool Interrupted) {
}


