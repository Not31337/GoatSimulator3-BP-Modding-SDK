#include "GGGoatGear_Static_Base.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UGGGoatGear_Static_Base::UGGGoatGear_Static_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->GearSlot = EGearSlot::GS_None;
    this->GoatSocket = EGoatSockets::GS_None;
    this->OverrideSocket = false;
    this->bCanChangeMaterial = true;
    this->bGearAbsoluteRotation = false;
    this->GoatMeshLocModifierPrio = 0;
    this->GearAbility = NULL;
    this->bShowTutorialForGearAbility = true;
    this->bHasPassiveEffect = false;
    this->bShowTutorialForPassiveEffect = false;
    this->bSentFirstPostNetReceive = false;
    this->Goat = NULL;
    this->bPassiveEffectActive = false;
    this->bCanEditEnumSocket = true;
    this->bCanEditGearSlot = true;
}

bool UGGGoatGear_Static_Base::ShouldOverrideSocket_Implementation(FName& SocketName) {
    return false;
}

bool UGGGoatGear_Static_Base::SetPassiveEffectActive_Implementation(bool bNewActive) {
    return false;
}

bool UGGGoatGear_Static_Base::SetGearHidden_Implementation(bool bNewHidden) {
    return false;
}


void UGGGoatGear_Static_Base::OnRep_bPassiveEffectActive() {
}

bool UGGGoatGear_Static_Base::IsPassiveEffectActive_Implementation() {
    return false;
}

bool UGGGoatGear_Static_Base::IsASkinnedMesh_Implementation() {
    return false;
}

bool UGGGoatGear_Static_Base::HasPassiveEffect_Implementation() {
    return false;
}

bool UGGGoatGear_Static_Base::HasGearAbilityOrEffect_Implementation() {
    return false;
}

bool UGGGoatGear_Static_Base::GoatMaterialUpdated_Implementation(const TArray<FMatElement>& NewMaterials) {
    return false;
}

bool UGGGoatGear_Static_Base::GoatCustomStencilUpdated_Implementation(const bool bInUseCustomStencil, int32 CustomStencilIndex) {
    return false;
}

bool UGGGoatGear_Static_Base::GetPassiveEffectActive() const {
    return false;
}

EGoatSockets UGGGoatGear_Static_Base::GetGoatSocket_Implementation() {
    return EGoatSockets::GS_None;
}

AGGGoat* UGGGoatGear_Static_Base::GetGoat_Implementation() {
    return NULL;
}

EGearSlot UGGGoatGear_Static_Base::GetGearSlot_Implementation() {
    return EGearSlot::GS_None;
}

FGoatGearData UGGGoatGear_Static_Base::GetGearData_Implementation() {
    return FGoatGearData{};
}

TSubclassOf<UGGGearAbility> UGGGoatGear_Static_Base::GetGearAbility_Implementation() {
    return NULL;
}

FString UGGGoatGear_Static_Base::GetAssetID_Implementation() {
    return TEXT("");
}

FGameplayTagContainer UGGGoatGear_Static_Base::GetAbilityGameplayTags_Implementation() {
    return FGameplayTagContainer{};
}

void UGGGoatGear_Static_Base::GameplayCuesLoaded() {
}

bool UGGGoatGear_Static_Base::CanGoatEquipThis_Implementation(UGGAlternativeGoatDataAsset* AltGoatAsset) {
    return false;
}


void UGGGoatGear_Static_Base::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_Base, bPassiveEffectActive);
}


