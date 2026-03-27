#include "BTDecorator_GGMatchesGameplayTag.h"

UBTDecorator_GGMatchesGameplayTag::UBTDecorator_GGMatchesGameplayTag() {
    this->NodeName = TEXT("Matches Gameplay Tag");
    this->GameplayTagCompareType = EGameplayTagCompareType::GTCT_HasTagExact;
    this->bOnlyUseKeyToCheckParent = false;
}


