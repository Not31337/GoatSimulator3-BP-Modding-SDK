#include "GGMusicManager.h"

UGGMusicManager::UGGMusicManager() {
    this->SeamlessTravelTrack = NULL;
    this->CurrentlyPlayingTrack = NULL;
    this->ChannelA = NULL;
    this->ChannelB = NULL;
    this->bFadeInReverse = false;
}

void UGGMusicManager::WithdrawMusicTrackRequest(UObject* WorldContextObject, UMusicTrack* TrackRequest) {
}

void UGGMusicManager::RequestMusicTrack(UObject* WorldContextObject, UMusicTrack* TrackRequest) {
}

void UGGMusicManager::RemoveStartTimeForContinuousTrack(UMusicTrack* Track) {
}

void UGGMusicManager::OnGoatAreaStateChange(AGGGoat* Goat, FGameplayTag AreaTag) {
}

void UGGMusicManager::OnCurrentLevelChanged(UObject* WorldContextObject, const FString& CurrentLevel, bool bIsTransitionLevel) {
}

void UGGMusicManager::ClearNonPersistantTracks(const FString& CurrentLevel) {
}


