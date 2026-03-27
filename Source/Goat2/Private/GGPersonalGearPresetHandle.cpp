#include "GGPersonalGearPresetHandle.h"

UGGPersonalGearPresetHandle::UGGPersonalGearPresetHandle() {
    this->PlayerId = 0;
    this->bSavingDeferred = false;
    this->DeferredLocalPlayer = NULL;
}

bool UGGPersonalGearPresetHandle::UpdatePresetToMatchEquipped() {
    return false;
}

void UGGPersonalGearPresetHandle::UnPreviewPreset() {
}

void UGGPersonalGearPresetHandle::ToggleFavorite() {
}

void UGGPersonalGearPresetHandle::SetFavorite(bool bNewIsFavorite) {
}

void UGGPersonalGearPresetHandle::PreviewPreset() {
}

bool UGGPersonalGearPresetHandle::IsPresetUnique(UObject* HandleOuter, UGGPersonalGearPresetHandle* Handle, ULocalPlayer* LocalPlayer) {
    return false;
}

bool UGGPersonalGearPresetHandle::IsPresetSameAsLastCreated(UObject* HandleOuter, UGGPersonalGearPresetHandle* Handle, ULocalPlayer* LocalPlayer) {
    return false;
}

bool UGGPersonalGearPresetHandle::IsHandleValid() const {
    return false;
}

bool UGGPersonalGearPresetHandle::IsFavorite() const {
    return false;
}

FString UGGPersonalGearPresetHandle::GetSetNickname() const {
    return TEXT("");
}

FText UGGPersonalGearPresetHandle::GetPresetDefaultName(int32 SpecifiedIndex) const {
    return FText::GetEmpty();
}

TArray<UGGPersonalGearPresetHandle*> UGGPersonalGearPresetHandle::GetPersonalPresets(UObject* HandleOuter, ULocalPlayer* LocalPlayer) {
    return TArray<UGGPersonalGearPresetHandle*>();
}

int32 UGGPersonalGearPresetHandle::GetMaxNumPresets() {
    return 0;
}

TArray<FString> UGGPersonalGearPresetHandle::GetGearIDs() const {
    return TArray<FString>();
}

int64 UGGPersonalGearPresetHandle::GetCreationTime(bool bSkipValidityCheck) const {
    return 0;
}

int32 UGGPersonalGearPresetHandle::GetAssignedIndex() const {
    return 0;
}

bool UGGPersonalGearPresetHandle::EquipPreset() {
    return false;
}

void UGGPersonalGearPresetHandle::DeletePreset() {
}

UGGPersonalGearPresetHandle* UGGPersonalGearPresetHandle::CreateNewPresetFromEquipped(UObject* HandleOuter, ULocalPlayer* LocalPlayer) {
    return NULL;
}

bool UGGPersonalGearPresetHandle::CanPreviewPreset() {
    return false;
}

bool UGGPersonalGearPresetHandle::CanEquipPreset() {
    return false;
}


