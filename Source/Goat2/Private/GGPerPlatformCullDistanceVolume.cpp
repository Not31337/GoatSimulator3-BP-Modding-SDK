#include "GGPerPlatformCullDistanceVolume.h"

AGGPerPlatformCullDistanceVolume::AGGPerPlatformCullDistanceVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //this->CullDistances.AddDefaulted(2);
    this->MobileCinematicCullDistanceMultiplierLarge.AddDefaulted(4);
    this->MobileCinematicCullDistanceMultiplierSmall.AddDefaulted(4);
    this->MobileLargeObjectSize = 1000.00f;
    this->MobileCinematicStaticLODMultiplier = 2.00f;
    this->MobileExcludeLandscapeSplines = false;
    this->CurrentMoviePlayer = NULL;
}

void AGGPerPlatformCullDistanceVolume::RevertMobileCinematicDrawDistance() {
}

void AGGPerPlatformCullDistanceVolume::IncreaseMobileCinematicDrawDistance(UMovieSceneSequencePlayer* NewMoivePlayer) {
}

void AGGPerPlatformCullDistanceVolume::ChangeCullingForSmallerObjects(bool bIncrease) {
}


