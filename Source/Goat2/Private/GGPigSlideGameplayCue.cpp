#include "GGPigSlideGameplayCue.h"

AGGPigSlideGameplayCue::AGGPigSlideGameplayCue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartSlideSound = NULL;
    this->SlideLoop = NULL;
    this->SlideVolume = 0.50f;
    this->bSetFixSlidePitch = true;
    this->SlidePitch = 0.00f;
    this->SlidingAudioComp = NULL;
}


