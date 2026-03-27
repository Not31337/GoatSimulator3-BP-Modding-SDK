#include "GGPlayerGameDataAsset.h"

UGGPlayerGameDataAsset::UGGPlayerGameDataAsset() {
    this->GameIcon = NULL;
    this->GameIconMedium = NULL;
    this->GameIconSmall = NULL;
    this->RadarIcon = NULL;
    this->RequiredMinimumParticipants = 2;
    this->MatchDuration = 50.00f;
    this->TokensRewardedOnUnlock = 10000;
}

FString UGGPlayerGameDataAsset::GetUnreadID() {
    return TEXT("");
}


