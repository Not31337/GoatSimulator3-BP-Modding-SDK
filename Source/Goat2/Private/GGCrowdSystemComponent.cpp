#include "GGCrowdSystemComponent.h"

UGGCrowdSystemComponent::UGGCrowdSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugPrint = false;
    this->DebugDraw = false;
    this->DoRandomCommands = true;
    this->CommandDelay = 20.00f;
    this->CommandDelayDeviation = 0.00f;
    this->CommandNPCCooldown = 15.00f;
    this->CanTakeRequests = true;
    this->HaveSingleStandLocations = true;
    this->StandLocationEQ = NULL;
    this->QueryRunMode = EEnvQueryRunMode::RandomBest25Pct;
    this->FaceEvent = true;
    this->RandomFaceDirection = false;
    this->HaveGroups = false;
    this->bForceMakeGroups = false;
    this->bDontBreakGroups = false;
    this->bCanJoinExistingGroups = true;
    this->ChanceToJoinGroup = 25;
    this->GroupAroundLocationEQ = NULL;
    this->GroupStandLocationsEQ = NULL;
    this->MaxGroups = 2;
    this->MinGroupSize = 2;
    this->MaxGroupSize = 5;
    this->HaveAQueue = false;
    this->NPCEvent = NULL;
}

void UGGCrowdSystemComponent::RequestCommand(AGGNPC* NPC) {
}


