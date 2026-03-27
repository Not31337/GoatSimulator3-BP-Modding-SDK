#include "GGCastleStretchGoal_Apocalypse.h"

AGGCastleStretchGoal_Apocalypse::AGGCastleStretchGoal_Apocalypse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEditGoalIndex = false;
    this->bCanEditChaosCost = false;
    this->bIsFinalVaultUpgrade = false;
    this->SpendingSourcesDataTable = NULL;
}

void AGGCastleStretchGoal_Apocalypse::TriggerVaultLight() {
}

void AGGCastleStretchGoal_Apocalypse::TeleportPlayersToUpgradeLoc() {
}

void AGGCastleStretchGoal_Apocalypse::SetUpgradeLevelStates(bool bIsUnlocked) {
}

void AGGCastleStretchGoal_Apocalypse::SetLinkedSpawnersEnabled(bool bEnabled, TArray<FLinkedNPCSpawner> Spawners) {
}


