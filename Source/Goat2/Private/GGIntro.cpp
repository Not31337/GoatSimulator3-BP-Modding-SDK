#include "GGIntro.h"

AGGIntro::AGGIntro(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bCanSkipIntro = true;
    this->bIgnoreSaveGame = false;
    this->SaveGameKey = TEXT("HasPlayedIntro");
    this->bPlayedThisSession = false;
    this->bSkipSavingDuringSequence = false;
    this->bSkipInvalidationDuringSequence = false;
    this->IntroLevelSequence = NULL;
}

void AGGIntro::SkipIntro() {
}

void AGGIntro::PlayIntro() {
}




void AGGIntro::NativeDisableSkipForward() {
}

bool AGGIntro::IsIntroPlaying_Implementation() const {
    return false;
}

bool AGGIntro::IsAnyIntroPlayingAndSkipSaving(const UObject* WorldContext) {
    return false;
}

bool AGGIntro::IsAnyIntroPlayingAndSkipInvalidation(const UObject* WorldContext) {
    return false;
}

bool AGGIntro::IsAnyIntroPlaying(const UObject* WorldContext) {
    return false;
}

void AGGIntro::FinishIntro() {
}


