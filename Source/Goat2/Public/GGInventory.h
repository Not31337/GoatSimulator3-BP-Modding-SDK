#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EGearSlot.h"
#include "EResourceAcquisitionType.h"
#include "EResourceSpendType.h"
#include "OnChaosAcquiredDelegate.h"
#include "OnInstinctPackUnlockedDelegate.h"
#include "OnInstinctPacksLoadedDelegate.h"
#include "OnInstinctRemovePinDelegate.h"
#include "OnInventoryUnlockedDelegate.h"
#include "OnInventoryUnlockedStoreDelegate.h"
#include "OnKarmaAcquiredDelegate.h"
#include "OnMiniGameUnlockedDelegate.h"
#include "OnTokenAmountChangedDelegate.h"
#include "OnUpdateCachedGearStateDelegate.h"
#include "QuestTier.h"
#include "GGInventory.generated.h"

class AGGInstinct;
class AGGPlayerController;
class AGGPlayerState;
class AGGQuestBase;
class UGGAlternativeGoatDataAsset;
class UGGGoatGearInfoDataAsset;
class UGGInstinctPackDataAsset;
class UGGPlayerGameDataAsset;
class UGGProgression;
class UObjectLibrary;
class UWorld;

UCLASS(Blueprintable, Transient)
class GOAT2_API UGGInventory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTokenAmountChanged OnTokenAmountChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryUnlocked OnInventoryUnlockedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryUnlockedStore OnInventoryUnlockedStoreDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMiniGameUnlocked OnMiniGameUnlockedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInstinctPackUnlocked OnInstinctPackUnlockedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInstinctRemovePin OnInstinctRemovePinDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInstinctPacksLoaded OnInstinctPacksLoadedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKarmaAcquired OnKarmaAcquired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChaosAcquired OnChaosAcquired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateCachedGearState OnUpdateCachedGearState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGInstinct*> PinnedInstincts;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGProgression* LocalProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGGoatGearInfoDataAsset*> GearLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UGGGoatGearInfoDataAsset*> GearLibraryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGGoatGearInfoDataAsset*> GearLibrary_AGsOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGInstinctPackDataAsset*> InstinctDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObjectLibrary* InstinctObjectLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> UnreadItems;
    
public:
    UGGInventory();

    UFUNCTION(BlueprintCallable)
    void UpdateQuestUnreadStatus(AGGQuestBase* Quest);
    
    UFUNCTION(BlueprintCallable)
    bool UnlockStoreGearBlueprint(UGGGoatGearInfoDataAsset* DataAsset, FGameplayTag Context, AGGPlayerController* OptionalPC);
    
    UFUNCTION(BlueprintCallable)
    bool UnlockMiniGame(UGGPlayerGameDataAsset* GameDataAsset);
    
    UFUNCTION(BlueprintCallable)
    bool UnlockInstinctPack(UGGInstinctPackDataAsset* PackToUnlock, bool& bOutFirstPack, FGameplayTag Context);
    
    UFUNCTION(BlueprintCallable)
    bool UnlockGear(UGGGoatGearInfoDataAsset* GearDataAsset, FGameplayTag GearUnlockContext, AGGPlayerController* OptionalPC);
    
    UFUNCTION(BlueprintCallable)
    bool SpendTokens(int32 TokenAmount, EResourceSpendType SpendType, const FString& SpendActionID, const FString& SpendSource);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromUnread(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestTierCompleted(AGGQuestBase* Quest, const FQuestTier& Tier);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestCollectionMilestoneReached(AGGQuestBase* Quest, const FQuestTier& Milestone);
    
    UFUNCTION(BlueprintCallable)
    bool IsMiniGameUnlocked(UGGPlayerGameDataAsset* GameDataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGearUnlockedInStoreDataAsset(UGGGoatGearInfoDataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGearUnlockedDataAsset(UGGGoatGearInfoDataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGearUnknown(UGGGoatGearInfoDataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyGearWithDescriptorUnlocked(FGameplayTag DescriptorTag, bool bIgnoreUnlockedByDefault);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAGGearUnlocked(FGameplayTag AGTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnlockedInstinctPack();
    
    UFUNCTION(BlueprintCallable)
    bool HasGearInSlot(EGearSlot InSlot);
    
    UFUNCTION(BlueprintCallable)
    TArray<UGGGoatGearInfoDataAsset*> GetUnlockedGear(EGearSlot Slot, bool bExcludeFur, bool bExcludeHorns, bool bExcludeAltGoat, bool bExcludeDefault);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTokens();
    
    UFUNCTION(BlueprintCallable)
    UGGGoatGearInfoDataAsset* GetRandomGearFromSlot(EGearSlot InSlot, UGGAlternativeGoatDataAsset* AlternativeGoat, bool bRandomStyle, bool bIgnoreDLCRestriction);
    
    UFUNCTION(BlueprintCallable)
    static UGGGoatGearInfoDataAsset* GetRandomGearFromListStatic(UWorld* InWorld, TArray<UGGGoatGearInfoDataAsset*> GearList, bool bIgnoreDLCRestriction);
    
    UFUNCTION(BlueprintCallable)
    UGGGoatGearInfoDataAsset* GetRandomGearFromList(TArray<UGGGoatGearInfoDataAsset*> GearList, UGGAlternativeGoatDataAsset* AlternativeGoat, bool bIgnoreDLCRestriction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumInstinctPacksUnlocked(bool bCountTutorial, bool bOnlyCurrentLevelData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNumInstinctPacks(int32& Total, int32& Unlocked, bool bCountTutorial, bool bOnlyCurrentLevelData, bool bIncludeGloballyAddedPacks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGGGoatGearInfoDataAsset*> GetLibrary();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUnreadObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUnread(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGGoatGearInfoDataAsset* GetGearAssetFromID(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGGGoatGearInfoDataAsset*> GetAGGoatGearInfoDataAssets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FilterCanAfford(UObject* Target, UGGGoatGearInfoDataAsset* Obj, bool bReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FilterByPurchasable(UObject* Target, UGGGoatGearInfoDataAsset* Obj, bool bReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpendTokens(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    bool BuyGear(UGGGoatGearInfoDataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable)
    void AddToUnread(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    bool AcquireTokens(int32 TokenAmount, EResourceAcquisitionType AcquisitionType, const FString& AcquisitionActionID, const FString& AcquireSource);
    
};

