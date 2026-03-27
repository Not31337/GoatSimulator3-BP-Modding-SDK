#include "GGReplicatedMovementPawn.h"
#include "Engine/EngineTypes.h"
#include "GGReplicatedMovementComponent.h"

AGGReplicatedMovementPawn::AGGReplicatedMovementPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->MovementComponent = CreateDefaultSubobject<UGGReplicatedMovementComponent>(TEXT("Replicated Movement Component"));
    this->bShouldIgnoreNetDistanceCull = false;
}


