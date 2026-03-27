#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "AccessoryElement.h"
#include "AppearanceRowElement.h"
#include "AppearanceStreamingElement.h"
#include "BodyPartRowElement.h"
#include "EBodyParts.h"
#include "EGender.h"
#include "OnAppearanceLoadedAndSetDelegate.h"
#include "OnHeadSlotChangedDelegate.h"
#include "GGNPCAppearanceManager.generated.h"

class AGGNPCSpawner;
class AGGNPC_Humanoid;
class UGGNPCAppearanceSubsystem;
class UMaterialInterface;
class UObject;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGNPCAppearanceManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGNPCAppearanceSubsystem* AppearanceSubsystem;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockAppearanceByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockAppearanceAfterFirstSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRandomlyEquipAccessories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AccessoryChances;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAppearanceLoadedAndSet OnAppearanceLoadedAndSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeadSlotChanged OnHeadSlotChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CachedOverrideAnimBlueprint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccessoryElement> Accessories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC_Humanoid* OwnerNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OwnerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CurrentSkinMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> NPCAppearance;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ReplicatedNPCAppearance, meta=(AllowPrivateAccess=true))
    TArray<uint32> ReplicatedNPCAppearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAppearanceStreamingElement> AppearanceStreamingElements;
    
public:
    UGGNPCAppearanceManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasAppearanceGeneratedWithTag(FGameplayTag Tag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDebugInfo();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FString> SwitchPartInAppearanceArrayRowName(UObject* WorldContextObject, TArray<FString> NPCAppearanceArray, FBodyPartRowElement NewElement, bool& bMadeSwitch);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FString> SwitchPartInAppearanceArray(UObject* WorldContextObject, const TArray<FString>& NPCAppearanceArray, const FString& NewElement, bool& bMadeSwitch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldHideUpperBody() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldHideLowerBody() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldHideHair() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNPCAppearance(TArray<FString> NewNPCAppearance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNewAppearanceParts(TArray<FString> NewParts);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetBodyPartToRow(EBodyParts Part, FName RowName, int32 MaterialIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetBodyPartsToRows(TArray<FBodyPartRowElement> RowElements);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAppearanceToSet(const FString& RowName, AGGNPCSpawner* FromSpawner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAppearanceLocked(bool NewLocked);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAccessoryByType(FGameplayTag Type);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAccessoryByName(const FString& RowName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAccessoriesThatCoverHair(bool bForceRemove);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedNPCAppearance();
    
    UFUNCTION(BlueprintCallable)
    void NPCAppearanceLoaded(bool bNothingStreamed, const FAppearanceStreamingElement StreamingElement);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingAppearance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAccessoryWithName(const FName& RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAccessoryOfType(FGameplayTag Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRandomUpperBody(EGender Gender, FGameplayTag AreaTag, bool bForceAreaTag, bool bExcludeCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRandomLowerBody(EGender Gender, FGameplayTag AreaTag, bool bForceAreaTag, bool bExcludeCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRandomHead(EGender Gender, FGameplayTag AreaTag, bool bForceAreaTag, bool bExcludeCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRandomHair(EGender Gender, FGameplayTag AreaTag, bool bForceAreaTag, bool bExcludeCurrent, bool bFindHatFriendly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRandomAccessory(EGender Gender, FGameplayTag AccessoryType, FGameplayTag AreaTag, bool bForceAreaTag, bool bExcludeCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetRandomAccessories(EGender Gender, FGameplayTag AreaTag, int32 AccessoryAmount, bool bForceAreaTag, bool bExcludeCurrent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FName GetPartNameForSlot(EBodyParts Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetNPCAppearance(TArray<FString>& TrimmedAccessories, bool bIncludeAccessories) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetAppearanceLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetAppearanceGeneratedWithTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAppearanceFromSet(const FName& RowName, AGGNPCSpawner* FromSpawner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GetAndSetRandomPart(EBodyParts Part, EGender Gender, FGameplayTag AreaTag, bool bForceAreaTag, bool bExcludeCurrent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GetAndSetRandomAccessory(FGameplayTag AccessoryType, EGender Gender, FGameplayTag AreaTag, bool bForceAreaTag, bool bExcludeCurrent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    TArray<FString> GenerateAndSetNewAppearance(FGameplayTag AreaTag, TArray<FString> PredeterminedElements, EGender GenderOverride, bool bForceAreaTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EquipAccessory(const FString& RowName, int32 MatIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EquipAccessories(TArray<FAppearanceRowElement> RowElements);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearAccessories();
    
};

