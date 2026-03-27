#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EGearEquipContext.h"
#include "EGearSlot.h"
#include "EGiveOrRemove.h"
#include "GearEquipElement.h"
#include "GearEquipElementData.h"
#include "GearSlot.h"
#include "OnGearAbilityWasToggledDelegate.h"
#include "OnGearEquippedCallbackDelegate.h"
#include "OnGearWasUpdatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGearManager.generated.h"

class AGGGoat;
class UGGGearSlotDefinition;
class UGGGoatGearInfoDataAsset;
class UGGGoatGearStyleDataAsset;
class ULocalPlayer;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGearManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* OwnerGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocalPlayer* OwnerLocalPlayer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelPendingGearWhenRemovingGear;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USceneComponent>> EquippedGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USceneComponent>> UnequippedGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGearEquipElement> PreviouslyEquippedGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> CachedRemovedAbilityGearParts;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGearWasUpdated OnGearWasUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGearAbilityWasToggled OnGearAbilityWasToggled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGGearSlotDefinition*> GearSlotDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGearEquipElementData> StartupGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GearSlots, meta=(AllowPrivateAccess=true))
    TArray<FGearSlot> GearSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USceneComponent>> PreloadedGears;
    
public:
    UGGGoatGearManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnequipGearSlot(EGearSlot Slot);
    
    UFUNCTION(BlueprintCallable)
    void UnequipEverything(bool bIncludeAltGoat, bool bIncludeFur, bool bIncludeHorns);
    
    UFUNCTION(BlueprintCallable)
    void UnequipAndSaveGearForLater(bool bIncludeAltGoat, bool bIncludeFur, bool bIncludeHorns);
    
    UFUNCTION(BlueprintCallable)
    static void SetGearHidden(USceneComponent* GearComponent, bool bNewHidden, FName HideTag);
    
    UFUNCTION(BlueprintCallable)
    void SetAllGearsHidden(bool bSetHidden, FName HideTag, bool bIncludeHorns);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUnequipGearSlot(EGearSlot Slot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUnequipEverything(bool bIncludeAltGoat, bool bIncludeFur, bool bIncludeHorns);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestRemoveGearAbility(USceneComponent* GearPart);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestGearAbility(USceneComponent* GearPart);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerLoadAndEquipMultipleGears(const TArray<FGearEquipElementData>& EquipArray, EGearEquipContext EquipContext, bool bCancelPendingGearInSameSlot, bool bDisregardAlreadyEquipped);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerLoadAndEquipGearToSlot(UGGGoatGearInfoDataAsset* DataAsset, EGearEquipContext EquipContext, bool bGiveAbility, bool bCancelPendingGearInSameSlot, UGGGoatGearStyleDataAsset* StyleData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerGiveOrRemoveAllAbilities(EGiveOrRemove State);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerGiveOrRemoveAbilityOnSlot(EGearSlot Slot, EGiveOrRemove State);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerGiveOrRemoveAbility(USceneComponent* Gear, EGiveOrRemove State);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEquipDebugGear(TSubclassOf<USceneComponent> GearClass, bool bGiveAbility);
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveEquippedGearToFile();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RestoreCachedRemovedAbilities();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveAllAbilitiesAndCache();
    
    UFUNCTION(BlueprintCallable)
    void ReequipPreviousGear(EGearEquipContext EquipContext);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSlotUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GearSlots();
    
    UFUNCTION(BlueprintCallable)
    void OnGearAbilityToggled(EGearSlot Slot, bool bAbilityEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastGearUnequipped(const TArray<TSubclassOf<USceneComponent>>& GearUnequipped);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastGearEquipped(const TArray<TSubclassOf<USceneComponent>>& GearEquipped);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastGearAbilityToggled(USceneComponent* GearToggled, bool bEnabled);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadGearsFromSaveFile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquippingGearDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPassiveAbilityFromGear(USceneComponent* Gear) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGearEquippedInSlot(EGearSlot InSlot, UGGGoatGearInfoDataAsset* InDataAsset, UGGGoatGearStyleDataAsset* InStyleData);
    
    UFUNCTION(BlueprintCallable)
    bool HasGearWithStyleID(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    bool HasGearWithAssetID(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFurThatUsesGFur();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFurThatDoesNotUseGFur();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyActiveAbilitiesEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAbilityFromSlot(EGearSlot Slot, bool bCheckForActivePassive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAbilityFromGear(USceneComponent* Gear, bool bCheckForActivePassive) const;
    
    UFUNCTION(BlueprintCallable)
    void GiveOrRemoveAllAbilities(EGiveOrRemove State);
    
    UFUNCTION(BlueprintCallable)
    void GiveOrRemoveAbilityOnSlot(EGearSlot Slot, EGiveOrRemove State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGGoat* GetOwnerGoat() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<USceneComponent*> GetGearWithAssetID(const FString& ID, bool& HasGearWithID);
    
    UFUNCTION(BlueprintCallable)
    USceneComponent* GetGearWithAbilityTags(FGameplayTagContainer AbilityTags);
    
    UFUNCTION(BlueprintCallable)
    USceneComponent* GetGearOnSlot(EGearSlot Slot);
    
    UFUNCTION(BlueprintCallable)
    UGGGoatGearInfoDataAsset* GetGearDataAssetOnSlot(EGearSlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<USceneComponent>> GetGearClassArray(bool bIncludeAltGoat, bool bIncludeFur, bool bIncludeHorns);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetGearAssetIDArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USceneComponent*> GetGearArray(bool bIncludeAltGoat, bool bIncludeFur, bool bIncludeHorns);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEquipmentDebugString();
    
    UFUNCTION(BlueprintCallable)
    TArray<USceneComponent*> GetAllEquippedGear(bool& HasAnyGear);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool EquipMultipleGears(TArray<FGearEquipElementData> EquipArray, EGearEquipContext EquipContext, const FOnGearEquippedCallback& Callback, bool bCancelPendingGearInSameSlot);
    
    UFUNCTION(BlueprintCallable)
    bool EquipGearToSlot(UGGGoatGearInfoDataAsset* InfoDataAsset, EGearEquipContext EquipContext, const FOnGearEquippedCallback& Callback, bool bGiveAbility, bool bCancelPendingGearInSameSlot, UGGGoatGearStyleDataAsset* StyleData);
    
public:
    UFUNCTION(BlueprintCallable)
    void EquipDebugGear(TSubclassOf<USceneComponent> GearClass, bool bGiveAbility);
    
    UFUNCTION(BlueprintCallable)
    void EnableEquippingGear(bool DoReequipPreviousGear);
    
    UFUNCTION(BlueprintCallable)
    void DisableEquippingGear();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRequestGearAbility(EGearSlot Slot, USceneComponent* GearPart);
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelAllAbilities(bool bSkipPassives);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CancelAbilityWithTag(FGameplayTag AbilityTag) const;
    
};

