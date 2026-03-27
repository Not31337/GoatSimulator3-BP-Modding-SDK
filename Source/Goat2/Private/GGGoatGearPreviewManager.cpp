#include "GGGoatGearPreviewManager.h"

UGGGoatGearPreviewManager::UGGGoatGearPreviewManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultAltGoat = NULL;
    this->PreviewEffectMaterialParameterName = TEXT("CustomizationFX");
    this->EquipEffectMaterialParameterName = TEXT("EquipFX");
    this->PreviewEffectMaterialSpeed = 13.00f;
    this->EquipEffectMaterialSpeed = 13.00f;
    this->TargetArmLength = 0.00f;
    this->bCancelPendingGearWhenRevertingSlot = true;
    this->ParticleSystemAltGoatSwitch = NULL;
    this->ParticleSystemAltGoatBuy = NULL;
    this->ParticleSystemAltGoatModuleName = TEXT("VertSurfaceActor");
    this->EquippedGearParticleSize = 1.00f;
    this->OwnerGoat = NULL;
    this->OwnerLocalPlayer = NULL;
    this->GearManager = NULL;
    this->CurrentEquippedAltGoat = NULL;
}

void UGGGoatGearPreviewManager::SpawnGearParticle(FGearParticleSystem ParticleStruct, USceneComponent* InGear) {
}

void UGGGoatGearPreviewManager::PreviewCommittedGear() {
}

void UGGGoatGearPreviewManager::OnUnequippedPreviewGear_Implementation(USceneComponent* Gear) {
}

void UGGGoatGearPreviewManager::OnEquippedPreviewGear_Implementation(USceneComponent* Gear) {
}

void UGGGoatGearPreviewManager::OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat) {
}

bool UGGGoatGearPreviewManager::IsGearCommitted(UGGGoatGearInfoDataAsset* DataAsset) const {
    return false;
}

bool UGGGoatGearPreviewManager::IsAbilityEnabledForCommittedGearForSlot(EGearSlot Slot) {
    return false;
}

TArray<USceneComponent*> UGGGoatGearPreviewManager::GetCurrentPreviewGear() const {
    return TArray<USceneComponent*>();
}

UGGGoatGearInfoDataAsset* UGGGoatGearPreviewManager::GetCommittedGearForSlot(EGearSlot Slot) {
    return NULL;
}

TArray<FString> UGGGoatGearPreviewManager::GetCommittedGearAsGearIDs() const {
    return TArray<FString>();
}

TArray<FGearEquipElementData> UGGGoatGearPreviewManager::GetCommittedGearAsEquipData() const {
    return TArray<FGearEquipElementData>();
}

void UGGGoatGearPreviewManager::ClearPreview(bool bClearCommited) {
}

bool UGGGoatGearPreviewManager::CanPreviewSlot(EGearSlot Slot) const {
    return false;
}

bool UGGGoatGearPreviewManager::CanPreviewGear(UGGGoatGearInfoDataAsset* DataAsset) const {
    return false;
}


