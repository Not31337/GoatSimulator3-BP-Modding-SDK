#include "GGLoadingScreenComponent.h"

UGGLoadingScreenComponent::UGGLoadingScreenComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoadingNPCAppearanceDistance = 2000.00f;
    this->LoadingPhysicsActorsDistance = 2000.00f;
    this->LevelStartFadeInDuration = 0.50f;
    this->LoadingSoundMixer = NULL;
    this->LoadingScreenWidget = NULL;
    this->OwnerPlayer = NULL;
    this->OwnerPlayerGoat = NULL;
    this->GameInstance = NULL;
    this->LevelTravelSubsystem = NULL;
}

void UGGLoadingScreenComponent::StartLoadingScreen_TargetLocation(FVector TargetLocation, FLoadingScreenParameters Parameters) {
}

void UGGLoadingScreenComponent::StartLoadingScreen_Duration(float Duration, FLoadingScreenParameters Parameters) {
}

void UGGLoadingScreenComponent::ServerFinishedLevelStart_Implementation() {
}

void UGGLoadingScreenComponent::RemoveLoadingScreen(ERemovalReason RemovalReason, bool bForceDisableFadeIn) {
}

void UGGLoadingScreenComponent::OnLevelRemoved(ULevel* Level, UWorld* World) {
}

void UGGLoadingScreenComponent::OnLevelAdded(ULevel* Level, UWorld* World) {
}

bool UGGLoadingScreenComponent::InLoadingScreen() const {
    return false;
}

bool UGGLoadingScreenComponent::InLevelStartLoadingScreen() const {
    return false;
}

bool UGGLoadingScreenComponent::HasFinishedLoading() const {
    return false;
}

bool UGGLoadingScreenComponent::HasFinishedLevelStart() const {
    return false;
}

ELoadingScreenType UGGLoadingScreenComponent::GetCurrentLoadingScreenType() const {
    return ELoadingScreenType::LST_None;
}

void UGGLoadingScreenComponent::ClientStartLoadingScreen_TargetLocation_Implementation(FVector TargetLocation, FLoadingScreenParameters Parameters) {
}

void UGGLoadingScreenComponent::ClientStartLoadingScreen_Duration_Implementation(float Duration, FLoadingScreenParameters Parameters) {
}

void UGGLoadingScreenComponent::ClientRemoveLoadingScreen_Implementation(ERemovalReason RemovalReason, bool bForceDisableFadeIn) {
}


