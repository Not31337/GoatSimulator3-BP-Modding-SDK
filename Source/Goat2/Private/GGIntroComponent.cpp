#include "GGIntroComponent.h"

UGGIntroComponent::UGGIntroComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningController = NULL;
    this->DefaultIntroSaveGameKey = TEXT("HasPlayedIntro");
    this->bUseDefaultIntroKeyInHasPlayedIntroCheck = true;
    this->IntroSaveGameType = ESaveGameType::World;
    this->SkipIntroText = FText::FromString(TEXT("Skip Intro"));
    this->DefaultIntroRef = NULL;
    this->PreIntroMuteTrack = NULL;
    this->CurrentIntro = NULL;
}

void UGGIntroComponent::SkipCurrentIntro() {
}

bool UGGIntroComponent::ShouldPlayIntro(AGGIntro* Intro) {
    return false;
}

void UGGIntroComponent::ServerToggleGoatInIntro_Implementation(bool bInIntro) {
}
bool UGGIntroComponent::ServerToggleGoatInIntro_Validate(bool bInIntro) {
    return true;
}

void UGGIntroComponent::PlayIntro(AGGIntro* Intro) {
}

void UGGIntroComponent::PlayDefaultIntro() {
}

void UGGIntroComponent::OnLevelStartLoadingScreenRemoved() {
}

bool UGGIntroComponent::IsPlayingIntro() {
    return false;
}

void UGGIntroComponent::IntroFinished(AGGIntro* Intro) {
}

void UGGIntroComponent::IntroDestroyed(AActor* Actor) {
}

bool UGGIntroComponent::HasPlayedIntro(AGGIntro* Intro) {
    return false;
}

TSoftObjectPtr<AGGIntro> UGGIntroComponent::GetDefaultIntro() {
    return NULL;
}


