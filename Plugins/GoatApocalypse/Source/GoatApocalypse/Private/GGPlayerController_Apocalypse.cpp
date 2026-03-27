#include "GGPlayerController_Apocalypse.h"

AGGPlayerController_Apocalypse::AGGPlayerController_Apocalypse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->CustomCheatManager_Apocalypse = NULL;
    this->MotorcycleDistanceForAchievement = 1000000.00f;
    this->AchievementID = TEXT("AchievementApocMotorcycleDistID");
    this->TimeForInstinct = 10;
}

float AGGPlayerController_Apocalypse::GetDistanceTraveledWithMotorcycle() const {
    return 0.0f;
}

void AGGPlayerController_Apocalypse::ClientCompletedCourse_Implementation(int32 CourseIndex, int32 Time) {
}


