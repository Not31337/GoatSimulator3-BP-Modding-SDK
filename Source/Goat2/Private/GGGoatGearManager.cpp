#include "GGGoatGearManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UGGGoatGearManager::UGGGoatGearManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerGoat = NULL;
    this->OwnerLocalPlayer = NULL;
    this->bCancelPendingGearWhenRemovingGear = true;
}

void UGGGoatGearManager::UnequipGearSlot(EGearSlot Slot) {
}

void UGGGoatGearManager::UnequipEverything(bool bIncludeAltGoat, bool bIncludeFur, bool bIncludeHorns) {
}

void UGGGoatGearManager::UnequipAndSaveGearForLater(bool bIncludeAltGoat, bool bIncludeFur, bool bIncludeHorns) {
}

void UGGGoatGearManager::SetGearHidden(USceneComponent* GearComponent, bool bNewHidden, FName HideTag) {
}

void UGGGoatGearManager::SetAllGearsHidden(bool bSetHidden, FName HideTag, bool bIncludeHorns) {
}

void UGGGoatGearManager::ServerUnequipGearSlot_Implementation(EGearSlot Slot) {
}

void UGGGoatGearManager::ServerUnequipEverything_Implementation(bool bIncludeAltGoat, bool bIncludeFur, bool bIncludeHorns) {
}

void UGGGoatGearManager::ServerRequestRemoveGearAbility_Implementation(USceneComponent* GearPart) {
}

void UGGGoatGearManager::ServerRequestGearAbility_Implementation(USceneComponent* GearPart) {
}

void UGGGoatGearManager::ServerLoadAndEquipMultipleGears_Implementation(const TArray<FGearEquipElementData>& EquipArray, EGearEquipContext EquipContext, bool bCancelPendingGearInSameSlot, bool bDisregardAlreadyEquipped) {
}

void UGGGoatGearManager::ServerLoadAndEquipGearToSlot_Implementation(UGGGoatGearInfoDataAsset* DataAsset, EGearEquipContext EquipContext, bool bGiveAbility, bool bCancelPendingGearInSameSlot, UGGGoatGearStyleDataAsset* StyleData) {
}

void UGGGoatGearManager::ServerGiveOrRemoveAllAbilities_Implementation(EGiveOrRemove State) {
}

void UGGGoatGearManager::ServerGiveOrRemoveAbilityOnSlot_Implementation(EGearSlot Slot, EGiveOrRemove State) {
}

void UGGGoatGearManager::ServerGiveOrRemoveAbility_Implementation(USceneComponent* Gear, EGiveOrRemove State) {
}

void UGGGoatGearManager::ServerEquipDebugGear_Implementation(TSubclassOf<USceneComponent> GearClass, bool bGiveAbility) {
}

void UGGGoatGearManager::SaveEquippedGearToFile() {
}

void UGGGoatGearManager::RestoreCachedRemovedAbilities_Implementation() {
}

void UGGGoatGearManager::RemoveAllAbilitiesAndCache_Implementation() {
}

void UGGGoatGearManager::ReequipPreviousGear(EGearEquipContext EquipContext) {
}

void UGGGoatGearManager::OnSlotUpdated() {
}

void UGGGoatGearManager::OnRep_GearSlots() {
}

void UGGGoatGearManager::OnGearAbilityToggled(EGearSlot Slot, bool bAbilityEnabled) {
}

void UGGGoatGearManager::MulticastGearUnequipped_Implementation(const TArray<TSubclassOf<USceneComponent>>& GearUnequipped) {
}

void UGGGoatGearManager::MulticastGearEquipped_Implementation(const TArray<TSubclassOf<USceneComponent>>& GearEquipped) {
}

void UGGGoatGearManager::MulticastGearAbilityToggled_Implementation(USceneComponent* GearToggled, bool bEnabled) {
}

void UGGGoatGearManager::LoadGearsFromSaveFile() {
}

bool UGGGoatGearManager::IsEquippingGearDisabled() const {
    return false;
}

bool UGGGoatGearManager::HasPassiveAbilityFromGear(USceneComponent* Gear) const {
    return false;
}

bool UGGGoatGearManager::HasMatchingGearEquippedInSlot(EGearSlot InSlot, UGGGoatGearInfoDataAsset* InDataAsset, UGGGoatGearStyleDataAsset* InStyleData) {
    return false;
}

bool UGGGoatGearManager::HasGearWithStyleID(const FString& ID) {
    return false;
}

bool UGGGoatGearManager::HasGearWithAssetID(const FString& ID) {
    return false;
}

bool UGGGoatGearManager::HasFurThatUsesGFur() {
    return false;
}

bool UGGGoatGearManager::HasFurThatDoesNotUseGFur() {
    return false;
}

bool UGGGoatGearManager::HasAnyActiveAbilitiesEnabled() {
    return false;
}

bool UGGGoatGearManager::HasAbilityFromSlot(EGearSlot Slot, bool bCheckForActivePassive) {
    return false;
}

bool UGGGoatGearManager::HasAbilityFromGear(USceneComponent* Gear, bool bCheckForActivePassive) const {
    return false;
}

void UGGGoatGearManager::GiveOrRemoveAllAbilities(EGiveOrRemove State) {
}

void UGGGoatGearManager::GiveOrRemoveAbilityOnSlot(EGearSlot Slot, EGiveOrRemove State) {
}

AGGGoat* UGGGoatGearManager::GetOwnerGoat() const {
    return NULL;
}

TArray<USceneComponent*> UGGGoatGearManager::GetGearWithAssetID(const FString& ID, bool& HasGearWithID) {
    return TArray<USceneComponent*>();
}

USceneComponent* UGGGoatGearManager::GetGearWithAbilityTags(FGameplayTagContainer AbilityTags) {
    return NULL;
}

USceneComponent* UGGGoatGearManager::GetGearOnSlot(EGearSlot Slot) {
    return NULL;
}

UGGGoatGearInfoDataAsset* UGGGoatGearManager::GetGearDataAssetOnSlot(EGearSlot Slot) {
    return NULL;
}

TArray<TSubclassOf<USceneComponent>> UGGGoatGearManager::GetGearClassArray(bool bIncludeAltGoat, bool bIncludeFur, bool bIncludeHorns) {
    return TArray<TSubclassOf<USceneComponent>>();
}

TArray<FString> UGGGoatGearManager::GetGearAssetIDArray() {
    return TArray<FString>();
}

TArray<USceneComponent*> UGGGoatGearManager::GetGearArray(bool bIncludeAltGoat, bool bIncludeFur, bool bIncludeHorns) {
    return TArray<USceneComponent*>();
}

FString UGGGoatGearManager::GetEquipmentDebugString() {
    return TEXT("");
}

TArray<USceneComponent*> UGGGoatGearManager::GetAllEquippedGear(bool& HasAnyGear) {
    return TArray<USceneComponent*>();
}

bool UGGGoatGearManager::EquipMultipleGears(TArray<FGearEquipElementData> EquipArray, EGearEquipContext EquipContext, const FOnGearEquippedCallback& Callback, bool bCancelPendingGearInSameSlot) {
    return false;
}

bool UGGGoatGearManager::EquipGearToSlot(UGGGoatGearInfoDataAsset* InfoDataAsset, EGearEquipContext EquipContext, const FOnGearEquippedCallback& Callback, bool bGiveAbility, bool bCancelPendingGearInSameSlot, UGGGoatGearStyleDataAsset* StyleData) {
    return false;
}

void UGGGoatGearManager::EquipDebugGear(TSubclassOf<USceneComponent> GearClass, bool bGiveAbility) {
}

void UGGGoatGearManager::EnableEquippingGear(bool DoReequipPreviousGear) {
}

void UGGGoatGearManager::DisableEquippingGear() {
}

void UGGGoatGearManager::ClientRequestGearAbility_Implementation(EGearSlot Slot, USceneComponent* GearPart) {
}

void UGGGoatGearManager::CancelAllAbilities(bool bSkipPassives) {
}

void UGGGoatGearManager::CancelAbilityWithTag(FGameplayTag AbilityTag) const {
}

void UGGGoatGearManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGearManager, GearSlots);
}


