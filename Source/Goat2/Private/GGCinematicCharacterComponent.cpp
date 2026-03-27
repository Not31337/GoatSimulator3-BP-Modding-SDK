#include "GGCinematicCharacterComponent.h"

UGGCinematicCharacterComponent::UGGCinematicCharacterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bLoadGearInBeginPlay = true;
    this->bEquipGearFromLocalInventory = true;
    this->bResetEquippedGearWhenInventoryIsReset = true;
    this->ParticleSystemInventoryReset = NULL;
    this->InventoryResetUnEquipDelay = 0.00f;
    this->bHasFinishedLoading = false;
}

void UGGCinematicCharacterComponent::OnInventoryReset() {
}

void UGGCinematicCharacterComponent::OnGearEquipped(UGGGoatGearManager* GearManager) {
}

void UGGCinematicCharacterComponent::OnDLCsUpdated() {
}

void UGGCinematicCharacterComponent::EquipGear() {
}


