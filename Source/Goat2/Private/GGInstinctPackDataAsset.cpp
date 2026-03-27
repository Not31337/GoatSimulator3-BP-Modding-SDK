#include "GGInstinctPackDataAsset.h"

UGGInstinctPackDataAsset::UGGInstinctPackDataAsset() {
    this->TokenReward = 500;
    this->bIsTutorial = false;
    this->bIsGloballyAddedPack = false;
    this->bIsPostReleasePack = false;
    this->bHideWhenLocked = false;
    this->bUnlocked = false;
}

bool UGGInstinctPackDataAsset::UnlockInstinctPack(AGGPlayerController* Instigator, bool& bOutFirstPack) {
    return false;
}

bool UGGInstinctPackDataAsset::IsUnlocked() {
    return false;
}


