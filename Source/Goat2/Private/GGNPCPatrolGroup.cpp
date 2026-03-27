#include "GGNPCPatrolGroup.h"
#include "Components/SceneComponent.h"

AGGNPCPatrolGroup::AGGNPCPatrolGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->PatrollingNPCClass = NULL;
    this->GroupMaxSize = 4;
    this->GroupMinSize = 3;
    this->PatrollingSpeed = 145.00f;
    this->MaxDistanceAhead = 500.00f;
    this->PatrollingPositions.AddDefaulted(5);
    this->MaxDistanceFromGroup = 4000.00f;
    this->bTraceToGround = true;
    this->TraceLength = 1500.00f;
    this->DistanceOverGround = 100.00f;
    this->bLookForPatrolTarget = true;
    this->bLookForPlayers = true;
    this->bSetToAngryMood = true;
    this->ScanDistance = 2000.00f;
    this->CurrentPath = NULL;
    this->PatrolsSubsystem = NULL;
}


