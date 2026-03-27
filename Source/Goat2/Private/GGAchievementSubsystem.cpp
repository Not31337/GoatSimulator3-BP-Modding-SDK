#include "GGAchievementSubsystem.h"

UGGAchievementSubsystem::UGGAchievementSubsystem() {
    this->LoadedAchievementDataTables = NULL;
    this->AchievementDataTables.AddDefaulted(3);
}

void UGGAchievementSubsystem::UnlockAchievements(TArray<FString> AchievementIDs, AGGPlayerController* PC) {
}

void UGGAchievementSubsystem::UnlockAchievement(const FString& AchievementID, AGGPlayerController* PC) {
}

void UGGAchievementSubsystem::QueryAchievements() {
}


