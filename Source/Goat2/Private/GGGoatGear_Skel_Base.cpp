#include "GGGoatGear_Skel_Base.h"
#include "Components/SkinnedMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UGGGoatGear_Skel_Base::UGGGoatGear_Skel_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
    this->GearSlot = EGearSlot::GS_None;
    this->GoatSocket = EGoatSockets::GS_None;
    this->OverrideSocket = false;
    this->bCanChangeMaterial = true;
    this->bGearAbsoluteRotation = false;
    this->bUseGoatMeshAsSkinnedMasterPose = false;
    this->GoatMeshLocModifierPrio = 0;
    this->GearAbility = NULL;
    this->bShowTutorialForGearAbility = true;
    this->bHasPassiveEffect = false;
    this->bShowTutorialForPassiveEffect = false;
    this->bSentFirstPostNetReceive = false;
    this->Goat = NULL;
    this->bPassiveEffectActive = true;
    this->bCanEditEnumSocket = true;
    this->bCanEditGearSlot = true;
}

bool UGGGoatGear_Skel_Base::ShouldOverrideSocket_Implementation(FName& SocketName) {
    return false;
}

bool UGGGoatGear_Skel_Base::SetPassiveEffectActive_Implementation(bool bNewActive) {
    return false;
}

bool UGGGoatGear_Skel_Base::SetGearHidden_Implementation(bool bNewHidden) {
    return false;
}


void UGGGoatGear_Skel_Base::OnRep_bPassiveEffectActive() {
}

bool UGGGoatGear_Skel_Base::IsPassiveEffectActive_Implementation() {
    return false;
}

bool UGGGoatGear_Skel_Base::IsASkinnedMesh_Implementation() {
    return false;
}

bool UGGGoatGear_Skel_Base::HasPassiveEffect_Implementation() {
    return false;
}

bool UGGGoatGear_Skel_Base::HasGearAbilityOrEffect_Implementation() {
    return false;
}

bool UGGGoatGear_Skel_Base::GoatMaterialUpdated_Implementation(const TArray<FMatElement>& NewMaterials) {
    return false;
}

bool UGGGoatGear_Skel_Base::GoatCustomStencilUpdated_Implementation(const bool bInUseCustomStencil, int32 CustomStencilIndex) {
    return false;
}

bool UGGGoatGear_Skel_Base::GetPassiveEffectActive() const {
    return false;
}

EGoatSockets UGGGoatGear_Skel_Base::GetGoatSocket_Implementation() {
    return EGoatSockets::GS_None;
}

AGGGoat* UGGGoatGear_Skel_Base::GetGoat_Implementation() {
    return NULL;
}

EGearSlot UGGGoatGear_Skel_Base::GetGearSlot_Implementation() {
    return EGearSlot::GS_None;
}

FGoatGearData UGGGoatGear_Skel_Base::GetGearData_Implementation() {
    return FGoatGearData{};
}

TSubclassOf<UGGGearAbility> UGGGoatGear_Skel_Base::GetGearAbility_Implementation() {
    return NULL;
}

FString UGGGoatGear_Skel_Base::GetAssetID_Implementation() {
    return TEXT("");
}

FGameplayTagContainer UGGGoatGear_Skel_Base::GetAbilityGameplayTags_Implementation() {
    return FGameplayTagContainer{};
}

void UGGGoatGear_Skel_Base::GameplayCuesLoaded() {
}

bool UGGGoatGear_Skel_Base::CanGoatEquipThis_Implementation(UGGAlternativeGoatDataAsset* AltGoatAsset) {
    return false;
}


void UGGGoatGear_Skel_Base::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Skel_Base, bPassiveEffectActive);
}


