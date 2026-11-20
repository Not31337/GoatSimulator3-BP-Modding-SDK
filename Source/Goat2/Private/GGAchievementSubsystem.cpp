#include "GGAchievementSubsystem.h"

UGGAchievementSubsystem::UGGAchievementSubsystem() {
    this->LoadedAchievementDataTables = NULL;
    this->AchievementDataTables.AddDefaulted(4);
}

void UGGAchievementSubsystem::UnlockAchievements(TArray<FString> AchievementIDs, AGGPlayerController* PC) {
}

void UGGAchievementSubsystem::UnlockAchievement(const FString& AchievementID, AGGPlayerController* PC) {
}

void UGGAchievementSubsystem::QueryAchievements() {
}


