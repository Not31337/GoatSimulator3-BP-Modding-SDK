#include "GGMultiverseRiftManager.h"

UGGMultiverseRiftManager::UGGMultiverseRiftManager() {
}

void UGGMultiverseRiftManager::StartMultiview(int32 MultiviewID) {
}

void UGGMultiverseRiftManager::RemoveMultiview(int32 MultiviewID) {
}

bool UGGMultiverseRiftManager::IsIntroActive() {
    return false;
}

void UGGMultiverseRiftManager::IntroWasCompleted() {
}

bool UGGMultiverseRiftManager::HasIntroBeenCompleted() {
    return false;
}

EMegaRiftState UGGMultiverseRiftManager::GetMegaRiftState(EMegaRifts MegaRifts) {
    return EMegaRiftState::MRS_Hidden;
}

float UGGMultiverseRiftManager::GetMegaRiftProgression(EMegaRifts MegaRifts) {
    return 0.0f;
}

int32 UGGMultiverseRiftManager::GetCurrentMegaRiftSlot() const {
    return 0;
}

UGGRiftDataAsset* UGGMultiverseRiftManager::GetCurrentMegaRift() const {
    return NULL;
}


