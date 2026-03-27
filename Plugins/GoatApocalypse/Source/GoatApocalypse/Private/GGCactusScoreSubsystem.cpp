#include "GGCactusScoreSubsystem.h"

UGGCactusScoreSubsystem::UGGCactusScoreSubsystem() {
    this->TimerDuration = 5.00f;
    this->SpawnAbovePlayer = 150.00f;
    this->CurrentHighScore = -1;
    this->CactiRequiredForInstinct = 50;
    this->ScoreCurve = NULL;
}

bool UGGCactusScoreSubsystem::IsCactusStreakActive(AGGPlayerState_Apocalypse* Player) const {
    return false;
}

FPlayerCactusScore UGGCactusScoreSubsystem::GetPlayerScore(AGGPlayerState_Apocalypse* Player) const {
    return FPlayerCactusScore{};
}


