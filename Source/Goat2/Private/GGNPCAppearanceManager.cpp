#include "GGNPCAppearanceManager.h"
#include "Net/UnrealNetwork.h"

UGGNPCAppearanceManager::UGGNPCAppearanceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AppearanceSubsystem = NULL;
    this->bLockAppearanceByDefault = false;
    this->bLockAppearanceAfterFirstSet = false;
    this->bCanRandomlyEquipAccessories = true;
    this->AccessoryChances.AddDefaulted(2);
    this->CachedOverrideAnimBlueprint = NULL;
    this->OwnerNPC = NULL;
    this->OwnerMesh = NULL;
    this->CurrentSkinMaterial = NULL;
}

bool UGGNPCAppearanceManager::WasAppearanceGeneratedWithTag(FGameplayTag Tag) {
    return false;
}

void UGGNPCAppearanceManager::UpdateDebugInfo() {
}

TArray<FString> UGGNPCAppearanceManager::SwitchPartInAppearanceArrayRowName(UObject* WorldContextObject, TArray<FString> NPCAppearanceArray, FBodyPartRowElement NewElement, bool& bMadeSwitch) {
    return TArray<FString>();
}

TArray<FString> UGGNPCAppearanceManager::SwitchPartInAppearanceArray(UObject* WorldContextObject, const TArray<FString>& NPCAppearanceArray, const FString& NewElement, bool& bMadeSwitch) {
    return TArray<FString>();
}

bool UGGNPCAppearanceManager::ShouldHideUpperBody() const {
    return false;
}

bool UGGNPCAppearanceManager::ShouldHideLowerBody() const {
    return false;
}

bool UGGNPCAppearanceManager::ShouldHideHair() const {
    return false;
}

void UGGNPCAppearanceManager::SetNPCAppearance(TArray<FString> NewNPCAppearance) {
}

void UGGNPCAppearanceManager::SetNewAppearanceParts(TArray<FString> NewParts) {
}

void UGGNPCAppearanceManager::SetBodyPartToRow(EBodyParts Part, FName RowName, int32 MaterialIndex) {
}

void UGGNPCAppearanceManager::SetBodyPartsToRows(TArray<FBodyPartRowElement> RowElements) {
}

void UGGNPCAppearanceManager::SetAppearanceToSet(const FString& RowName, AGGNPCSpawner* FromSpawner) {
}

void UGGNPCAppearanceManager::SetAppearanceLocked(bool NewLocked) {
}

void UGGNPCAppearanceManager::RemoveAccessoryByType(FGameplayTag Type) {
}

void UGGNPCAppearanceManager::RemoveAccessoryByName(const FString& RowName) {
}

void UGGNPCAppearanceManager::RemoveAccessoriesThatCoverHair(bool bForceRemove) {
}

void UGGNPCAppearanceManager::OnRep_ReplicatedNPCAppearance() {
}

void UGGNPCAppearanceManager::NPCAppearanceLoaded(bool bNothingStreamed, const FAppearanceStreamingElement StreamingElement) {
}

bool UGGNPCAppearanceManager::IsLoadingAppearance() const {
    return false;
}

bool UGGNPCAppearanceManager::HasAccessoryWithName(const FName& RowName) {
    return false;
}

bool UGGNPCAppearanceManager::HasAccessoryOfType(FGameplayTag Type) {
    return false;
}

FString UGGNPCAppearanceManager::GetRandomUpperBody(EGender Gender, FGameplayTag AreaTag, bool bForceAreaTag, bool bExcludeCurrent) {
    return TEXT("");
}

FString UGGNPCAppearanceManager::GetRandomLowerBody(EGender Gender, FGameplayTag AreaTag, bool bForceAreaTag, bool bExcludeCurrent) {
    return TEXT("");
}

FString UGGNPCAppearanceManager::GetRandomHead(EGender Gender, FGameplayTag AreaTag, bool bForceAreaTag, bool bExcludeCurrent) {
    return TEXT("");
}

FString UGGNPCAppearanceManager::GetRandomHair(EGender Gender, FGameplayTag AreaTag, bool bForceAreaTag, bool bExcludeCurrent, bool bFindHatFriendly) {
    return TEXT("");
}

FString UGGNPCAppearanceManager::GetRandomAccessory(EGender Gender, FGameplayTag AccessoryType, FGameplayTag AreaTag, bool bForceAreaTag, bool bExcludeCurrent) {
    return TEXT("");
}

TArray<FString> UGGNPCAppearanceManager::GetRandomAccessories(EGender Gender, FGameplayTag AreaTag, int32 AccessoryAmount, bool bForceAreaTag, bool bExcludeCurrent) {
    return TArray<FString>();
}

FName UGGNPCAppearanceManager::GetPartNameForSlot(EBodyParts Slot) const {
    return NAME_None;
}

TArray<FString> UGGNPCAppearanceManager::GetNPCAppearance(TArray<FString>& TrimmedAccessories, bool bIncludeAccessories) const {
    return TArray<FString>();
}

bool UGGNPCAppearanceManager::GetAppearanceLocked() const {
    return false;
}

FGameplayTag UGGNPCAppearanceManager::GetAppearanceGeneratedWithTag() const {
    return FGameplayTag{};
}

TArray<FString> UGGNPCAppearanceManager::GetAppearanceFromSet(const FName& RowName, AGGNPCSpawner* FromSpawner) {
    return TArray<FString>();
}

void UGGNPCAppearanceManager::GetAndSetRandomPart(EBodyParts Part, EGender Gender, FGameplayTag AreaTag, bool bForceAreaTag, bool bExcludeCurrent) {
}

void UGGNPCAppearanceManager::GetAndSetRandomAccessory(FGameplayTag AccessoryType, EGender Gender, FGameplayTag AreaTag, bool bForceAreaTag, bool bExcludeCurrent) {
}

TArray<FString> UGGNPCAppearanceManager::GenerateAndSetNewAppearance(FGameplayTag AreaTag, TArray<FString> PredeterminedElements, EGender GenderOverride, bool bForceAreaTag) {
    return TArray<FString>();
}

void UGGNPCAppearanceManager::EquipAccessory(const FString& RowName, int32 MatIndex) {
}

void UGGNPCAppearanceManager::EquipAccessories(TArray<FAppearanceRowElement> RowElements) {
}

void UGGNPCAppearanceManager::ClearAccessories() {
}

void UGGNPCAppearanceManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGNPCAppearanceManager, ReplicatedNPCAppearance);
}


