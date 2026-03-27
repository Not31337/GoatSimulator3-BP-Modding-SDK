#include "GGPlushieNPCComponent.h"

UGGPlushieNPCComponent::UGGPlushieNPCComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeToScale = 0.10f;
    this->NpcScaleFactor = 0.50f;
    this->HeadScaleFactor = 1.50f;
    this->FeetScaleFactor = 1.50f;
    this->HandScaleFactor = 1.50f;
    this->NpcSoundClassOverride = NULL;
    this->StiffNPCPhysAsset = NULL;
}

void UGGPlushieNPCComponent::OnOwningNPCPooledOrMoved(AGGNPC* NPC, bool WasPooled) {
}


