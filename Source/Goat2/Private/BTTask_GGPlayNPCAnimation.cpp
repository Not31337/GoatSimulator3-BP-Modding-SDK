#include "BTTask_GGPlayNPCAnimation.h"

UBTTask_GGPlayNPCAnimation::UBTTask_GGPlayNPCAnimation() {
    this->NodeName = TEXT("Play NPC Animation");
    this->NonBlocking = false;
    this->BlockFor = 0.00f;
    this->PlayRate = 1.00f;
    this->bRandomizePlayRate = false;
    this->bReturnFailedIfSkeletonMismatch = false;
    this->AnimationType = EAnimationType::AT_Default;
    this->AnimationToPlay = NULL;
    this->MontageToSelect = ENPCAnimation::NA_Dance;
    this->NodeOwnerComp = NULL;
    this->NPC = NULL;
    this->bCanEditDefault = true;
    this->bCanEditBBKey = false;
    this->bCanEditNPCMontages = false;
}

void UBTTask_GGPlayNPCAnimation::OnHeadSlotChanged(AGGNPC_Humanoid* SetOnNPC, const FString& OldHead, const FString& NewHead) {
}

void UBTTask_GGPlayNPCAnimation::OnAnimationTimerDone() {
}

void UBTTask_GGPlayNPCAnimation::OnAnimationEnded(UAnimMontage* Montage, bool Interrupted) {
}


