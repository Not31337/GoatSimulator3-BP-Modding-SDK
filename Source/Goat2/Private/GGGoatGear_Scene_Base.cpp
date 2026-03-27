#include "GGGoatGear_Scene_Base.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UGGGoatGear_Scene_Base::UGGGoatGear_Scene_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GearSlot = EGearSlot::GS_None;
    this->GoatSocket = EGoatSockets::GS_None;
    this->OverrideSocket = false;
    this->bCanChangeMaterial = true;
    this->GoatMeshLocModifierPrio = 0;
    this->GearAbility = NULL;
    this->bShowTutorialForGearAbility = true;
    this->bHasPassiveEffect = false;
    this->bShowTutorialForPassiveEffect = false;
    this->bSentFirstPostNetReceive = false;
    this->Goat = NULL;
    this->bPassiveEffectActive = true;
    this->bCanEditOverrides = true;
    this->bCanEditChildMeshes = true;
    this->bCanEditTransform = true;
    this->bCanEditEquipRestrictions = true;
    this->bCanEditEnumSocket = true;
    this->bCanEditGearSlot = true;
}

bool UGGGoatGear_Scene_Base::ShouldOverrideSocket_Implementation(FName& SocketName) {
    return false;
}

bool UGGGoatGear_Scene_Base::SetPassiveEffectActive_Implementation(bool bNewActive) {
    return false;
}

bool UGGGoatGear_Scene_Base::SetGearHidden_Implementation(bool bNewHidden) {
    return false;
}


void UGGGoatGear_Scene_Base::OnRep_bPassiveEffectActive() {
}

bool UGGGoatGear_Scene_Base::IsPassiveEffectActive_Implementation() {
    return false;
}

bool UGGGoatGear_Scene_Base::IsASkinnedMesh_Implementation() {
    return false;
}

bool UGGGoatGear_Scene_Base::HasPassiveEffect_Implementation() {
    return false;
}

bool UGGGoatGear_Scene_Base::HasGearAbilityOrEffect_Implementation() {
    return false;
}

bool UGGGoatGear_Scene_Base::GoatMaterialUpdated_Implementation(const TArray<FMatElement>& NewMaterials) {
    return false;
}

bool UGGGoatGear_Scene_Base::GoatCustomStencilUpdated_Implementation(const bool bInUseCustomStencil, int32 CustomStencilIndex) {
    return false;
}

bool UGGGoatGear_Scene_Base::GetPassiveEffectActive() const {
    return false;
}

EGoatSockets UGGGoatGear_Scene_Base::GetGoatSocket_Implementation() {
    return EGoatSockets::GS_None;
}

AGGGoat* UGGGoatGear_Scene_Base::GetGoat_Implementation() {
    return NULL;
}

EGearSlot UGGGoatGear_Scene_Base::GetGearSlot_Implementation() {
    return EGearSlot::GS_None;
}

FGoatGearData UGGGoatGear_Scene_Base::GetGearData_Implementation() {
    return FGoatGearData{};
}

TSubclassOf<UGGGearAbility> UGGGoatGear_Scene_Base::GetGearAbility_Implementation() {
    return NULL;
}

FString UGGGoatGear_Scene_Base::GetAssetID_Implementation() {
    return TEXT("");
}

FGameplayTagContainer UGGGoatGear_Scene_Base::GetAbilityGameplayTags_Implementation() {
    return FGameplayTagContainer{};
}

void UGGGoatGear_Scene_Base::GameplayCuesLoaded() {
}

bool UGGGoatGear_Scene_Base::CanGoatEquipThis_Implementation(UGGAlternativeGoatDataAsset* AltGoatAsset) {
    return false;
}


void UGGGoatGear_Scene_Base::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Scene_Base, bPassiveEffectActive);
}


