#include "GGRiftDataAsset.h"

UGGRiftDataAsset::UGGRiftDataAsset() {
    this->RiftType = ERiftType::RT_MiniRift;
    this->TransitionEffect = NULL;
    this->bShowRiftLightingDuringTransition = false;
    this->bIsIntroRift = false;
    this->bIsEndingRift = false;
}


