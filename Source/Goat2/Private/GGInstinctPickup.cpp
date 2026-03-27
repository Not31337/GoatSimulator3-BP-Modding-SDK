#include "GGInstinctPickup.h"

AGGInstinctPickup::AGGInstinctPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataAsset = NULL;
    this->bUnlockMultiple = false;
    this->TutorialDataAsset = NULL;
    this->bIsPickedUp = false;
}

bool AGGInstinctPickup::UnlockTutorialInstinct(AGGPlayerController* InInstigator, bool& bOutFirstPack) {
    return false;
}

bool AGGInstinctPickup::UnlockInstincts(AGGPlayerController* InInstigator, bool& bOutFirstPack) {
    return false;
}


void AGGInstinctPickup::OnInventoryInitialized(UGGInventory* Inventory) {
}

void AGGInstinctPickup::OnInstinctPackUnlocked(UGGInstinctPackDataAsset* InDataAsset, FGameplayTag Context) {
}

void AGGInstinctPickup::OnInstinctPacksLoaded() {
}


bool AGGInstinctPickup::IsPickupActive() {
    return false;
}

bool AGGInstinctPickup::GetIsPickedUp() {
    return false;
}

void AGGInstinctPickup::CreateUnlockedInstinctNotification(AGGPlayerController* InInstigator, UGGInstinctPackDataAsset* InDataAsset) {
}


