#include "CurrentLoadingScreen.h"

FCurrentLoadingScreen::FCurrentLoadingScreen() {
    this->bInLoadingScreen = false;
    this->LoadingScreenType = ELoadingScreenType::LST_None;
    this->LoadingScreenDuration = 0.00f;
    this->LoadingScreenStartTimestamp = 0.00f;
    this->bHasFinishedLoading = false;
    this->FadeState = EFadeState::FS_None;
    this->FadeOutFinishedTimestamp = 0.00f;
    this->ActiveLoadingScreen = NULL;
}

