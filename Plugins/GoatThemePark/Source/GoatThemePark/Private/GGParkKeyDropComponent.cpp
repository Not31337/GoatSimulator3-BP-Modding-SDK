#include "GGParkKeyDropComponent.h"

UGGParkKeyDropComponent::UGGParkKeyDropComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DropChance = 100;
    this->KeyClass = NULL;
    this->DropParticle = NULL;
    this->DropSound = NULL;
    this->OwnerNPC = NULL;
}

void UGGParkKeyDropComponent::OnNPCSpawnedIntoWorld(AGGNPC* NPC) {
}

void UGGParkKeyDropComponent::OnNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled) {
}

void UGGParkKeyDropComponent::OnNPCHeadbutted(UObject* HeadbuttedObject, AGGGoat* HeadbuttingGoat) {
}

void UGGParkKeyDropComponent::MulticastPlayEffects(FVector_NetQuantize Loc) {
}


