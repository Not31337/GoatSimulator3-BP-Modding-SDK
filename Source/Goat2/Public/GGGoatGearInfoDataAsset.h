#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EGearItemType.h"
#include "EGearSlot.h"
#include "EGoatDLC.h"
#include "EGoatDLCRestriction.h"
#include "GGGoatGearDataAssetInterface.h"
#include "GGListElementSortingInterface.h"
#include "GearDLCInfo.h"
#include "OnPickupAssetsLoadedDelegate.h"
#include "SplitScreenStyleData.h"
#include "TagTexturePair.h"
#include "GGGoatGearInfoDataAsset.generated.h"

class UGGAlternativeGoatDataAsset;
class UGGGoatGearInfoDataAsset;
class UGGGoatGearStyleDataAsset;
class UMaterialInterface;
class UObject;
class USceneComponent;
class USoundBase;
class UTexture2D;
class UWorld;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API UGGGoatGearInfoDataAsset : public UPrimaryDataAsset, public IGGListElementSortingInterface, public IGGGoatGearDataAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USceneComponent> GoatGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> TitleTextArguments;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGearSlot GearSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGearItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> DescriptionTextArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DLCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DLCFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DLCIconRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DLCIconOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DLCIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AbilityDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> GearIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnlockedByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* UnlocksWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnlockedByDefaultInDemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowInStoreByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideInStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasEquipRestrictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> CanEquipThis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> CannotEquipThis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGGoatGearStyleDataAsset*> Styles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Descriptors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGoatDLCRestriction DLCRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGoatDLC RequiresDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsConnectedToInstinct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> PickupPreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMaterialInterface>, int32> PickupPreviewMaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGearSlot> UnsupportedGearSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AltGoatTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* EquipOverrideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTestGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideInInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReEquipOnStartup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* NoneDataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSplitScreenStyleData> SplitScreenStyleData;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGearDLCInfo> GearDLCInfo;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTagTexturePair> AltGoatNoneIconOverride;
    
    UGGGoatGearInfoDataAsset();

    UFUNCTION(BlueprintCallable)
    void SetStyleAsCurrentGear(UGGGoatGearStyleDataAsset* StyleData, int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    void LoadPickupMesh(FOnPickupAssetsLoaded OnPickupAssetsLoaded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquippingRestricted(const UWorld* InWorld) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStyles();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDLCRestrictions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<USceneComponent> GetGoatGearOptionalStyle(UGGGoatGearStyleDataAsset* StyleData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<USceneComponent> GetGoatGear(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDLCDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGGoatGearStyleDataAsset* GetCurrentStyleData(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAbilityDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGoatEquipThis_Tag(FGameplayTag InAltGoatTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGoatEquipThis(UGGAlternativeGoatDataAsset* AltGoatAsset);
    

    // Fix for true pure virtual functions not being implemented
};

