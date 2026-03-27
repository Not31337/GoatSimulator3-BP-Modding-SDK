#include "GGRiftTransitionEffect.h"

AGGRiftTransitionEffect::AGGRiftTransitionEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinimumTimeInTransition = 6.00f;
    this->MinimumTimeInTransitionAfterLoaded = 3.00f;
    this->OwnerPlayer = NULL;
    this->OwnerRiftUser = NULL;
    this->RiftAsset = NULL;
    this->bTeleportingInto = false;
}

void AGGRiftTransitionEffect::TeleportPlayer() {
}

void AGGRiftTransitionEffect::ResetCameraVolumeChanges() {
}

bool AGGRiftTransitionEffect::IsRiftTravelReady() const {
    return false;
}

void AGGRiftTransitionEffect::EndTransitionEffect() {
}




