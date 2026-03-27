#include "GGInstinct_Sandworms.h"

AGGInstinct_Sandworms::AGGInstinct_Sandworms(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
    this->DurationToResetSandworm = 60.00f;
}

void AGGInstinct_Sandworms::OnPlayerStopRidingSandworm(AGGSandWorm* Worm, AGGGoat* Player, bool bIsDriver) {
}

void AGGInstinct_Sandworms::OnPlayerStartRidingSandworm(AGGSandWorm* Worm, AGGGoat* Player, bool bIsDriver) {
}


