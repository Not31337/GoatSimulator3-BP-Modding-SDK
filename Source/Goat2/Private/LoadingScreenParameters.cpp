#include "LoadingScreenParameters.h"

FLoadingScreenParameters::FLoadingScreenParameters() {
    this->bAutomaticallyRemove = false;
    this->bDoFadeOut = false;
    this->FadeOutDuration = 0.00f;
    this->ForceTimeInFadeOut = 0.00f;
    this->bDoFadeIn = false;
    this->FadeInDuration = 0.00f;
    this->bCanUseWidget = false;
    this->TimeAfterFadeForWidget = 0.00f;
    this->OverrideLoadingScreen = NULL;
    this->bAddSoundMix = false;
    this->bUseEffectSources = false;
    this->bCheckForStreamingLevels = false;
    this->bCheckForPActors = false;
    this->bCheckForNPC = false;
    this->TimeLimit = 0.00f;
    this->bForTeleport = false;
    this->bForSplitscreen = false;
    this->bBeforeIntroSeq = false;
}

