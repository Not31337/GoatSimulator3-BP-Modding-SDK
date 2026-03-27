#include "GGGameMode.h"
#include "GGPlayerState.h"

AGGGameMode::AGGGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerStateClass = AGGPlayerState::StaticClass();
    this->bUseSeamlessTravel = true;
    this->PlayerStartOccupiedDistanceCompare = 3000.00f;
    this->PlayerStartGoatDistanceCheck = 100.00f;
    this->DefaultSlowMotionTimeDilation = 0.25f;
}

void AGGGameMode::TimeDilateFor(float TimeDilation, float Duration) {
}

void AGGGameMode::SetTimeDilation(float TimeDilation) {
}

void AGGGameMode::Say(AActor* Sender, const FString& Msg) {
}

void AGGGameMode::ResetTimeDilation() {
}

bool AGGGameMode::HasValidWorldSaveFileName() const {
    return false;
}

EWorldSaveFileName AGGGameMode::GetWorldSaveFileName() const {
    return EWorldSaveFileName::Invalid;
}

float AGGGameMode::GetCurrentTimeDilation() const {
    return 0.0f;
}

AActor* AGGGameMode::CustomChoosePlayerStart(AController* Player) {
    return NULL;
}


