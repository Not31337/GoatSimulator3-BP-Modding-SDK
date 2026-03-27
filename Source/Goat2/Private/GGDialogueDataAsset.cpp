#include "GGDialogueDataAsset.h"
#include "GGDialogueInstance.h"

UGGDialogueDataAsset::UGGDialogueDataAsset() {
    this->InstanceClass = UGGDialogueInstance::StaticClass();
    this->bStartDialogueAutomaticallyOnApproach = false;
    this->DistanceToStartTheDialogue = 0.00f;
    this->SpeechBubbleCullDistance = 2500.00f;
    this->bUseCustomName = false;
}

void UGGDialogueDataAsset::ResetDialogueTag() const {
}

bool UGGDialogueDataAsset::IsValidLineIndex(FGGDialogueLineIndex InIndex) const {
    return false;
}

FGameplayTag UGGDialogueDataAsset::GetTagForDialogue() const {
    return FGameplayTag{};
}

TArray<FGGDialogueLine> UGGDialogueDataAsset::GetDialogueLinesForBranch(int32 BranchIndex) const {
    return TArray<FGGDialogueLine>();
}

FGGDialogueLine UGGDialogueDataAsset::GetDialogueLineForIndex(FGGDialogueLineIndex InIndex) const {
    return FGGDialogueLine{};
}


