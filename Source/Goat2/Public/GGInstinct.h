#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EInstinctDifficultyType.h"
#include "EInstinctType.h"
#include "GGQuestBase.h"
#include "Templates/SubclassOf.h"
#include "GGInstinct.generated.h"

class AGGGoat;
class AGGPlayerController;
class UGGGoatGearInfoDataAsset;
class UGGInstinctCategoryDataAsset;
class UGGInstinctPackDataAsset;
class UGGInventory;
class USceneComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGInstinct : public AGGQuestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInstinctType InstinctType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AreaTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireGearUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* RequiredUnlockedGearAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BasePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalGearPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalAreaPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInstinctDifficultyType InstinctDifficultyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInstinctDifficultyType, int32> InstinctDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGInstinctPackDataAsset* RequiredInstinctPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InstinctButtonID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGInstinctCategoryDataAsset* InstinctCategoryDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAvailableOnAllDLCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnread;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPlayerController*> PinningGoatControllers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideProgressOnMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MobileProgressOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideProgressOnGen8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Gen8ProgressOverride;
    
public:
    AGGInstinct(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPinningPlayerController(AGGPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    void SetAsPinned(bool ShouldBePinned, AGGPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    void RemovePinningPlayerController(AGGPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryInitialized(UGGInventory* Inventory);
    
    UFUNCTION(BlueprintCallable)
    void OnInstinctPackUnlocked(UGGInstinctPackDataAsset* InDataAsset, FGameplayTag Context);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGearEquipped(AGGGoat* Goat, const TArray<TSubclassOf<USceneComponent>>& GearEquipped);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPinned(AGGPlayerController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInstinctUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPriority(AGGPlayerController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGPlayerController*> GetPinningPlayerControllers();
    
};

