#include "GGCupidInLoveEffectComponent.h"

UGGCupidInLoveEffectComponent::UGGCupidInLoveEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SoftEffectSpawner = NULL;
    this->OwnerNPC = NULL;
    this->GoatInstigator = NULL;
}

void UGGCupidInLoveEffectComponent::SpawnEffects() {
}

void UGGCupidInLoveEffectComponent::OnNPCOwnerPooled(AGGNPC* NPC, bool bWasPooled) {
}

void UGGCupidInLoveEffectComponent::OnNPCGrabbedCharacter(AGGNPC* NPC, AGGCharacter* Character) {
}

void UGGCupidInLoveEffectComponent::MulticastTriggerInstinct_Implementation(AGGGoat* InstinctOwner) {
}


