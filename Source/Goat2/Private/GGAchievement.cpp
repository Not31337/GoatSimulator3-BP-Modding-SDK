#include "GGAchievement.h"

AGGAchievement::AGGAchievement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


bool AGGAchievement::HasMetRequirements_Implementation(bool bIsClient, bool bIsMainMenu, bool bIsIsland) {
    return false;
}

TArray<AGGPlayerController*> AGGAchievement::GetPlayersInWorld() {
    return TArray<AGGPlayerController*>();
}


