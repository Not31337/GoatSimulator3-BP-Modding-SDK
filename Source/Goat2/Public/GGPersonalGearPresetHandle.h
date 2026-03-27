#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GGListElementSortingInterface.h"
#include "GGPersonalGearPresetHandle.generated.h"

class UGGGoatGearInfoDataAsset;
class UGGGoatGearStyleDataAsset;
class UGGPersonalGearPresetHandle;
class ULocalPlayer;

UCLASS(Blueprintable)
class GOAT2_API UGGPersonalGearPresetHandle : public UObject, public IGGListElementSortingInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GearSetId;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSavingDeferred;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocalPlayer* DeferredLocalPlayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UGGGoatGearInfoDataAsset*, UGGGoatGearStyleDataAsset*> CachedOriginalStyles;
    
public:
    UGGPersonalGearPresetHandle();

    UFUNCTION(BlueprintCallable)
    bool UpdatePresetToMatchEquipped();
    
    UFUNCTION(BlueprintCallable)
    void UnPreviewPreset();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFavorite();
    
    UFUNCTION(BlueprintCallable)
    void SetFavorite(bool bNewIsFavorite);
    
    UFUNCTION(BlueprintCallable)
    void PreviewPreset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPresetUnique(UObject* HandleOuter, UGGPersonalGearPresetHandle* Handle, ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPresetSameAsLastCreated(UObject* HandleOuter, UGGPersonalGearPresetHandle* Handle, ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHandleValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFavorite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSetNickname() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPresetDefaultName(int32 SpecifiedIndex) const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<UGGPersonalGearPresetHandle*> GetPersonalPresets(UObject* HandleOuter, ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxNumPresets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetGearIDs() const;
    
    UFUNCTION(BlueprintPure)
    int64 GetCreationTime(bool bSkipValidityCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAssignedIndex() const;
    
    UFUNCTION(BlueprintCallable)
    bool EquipPreset();
    
    UFUNCTION(BlueprintCallable)
    void DeletePreset();
    
    UFUNCTION(BlueprintCallable)
    static UGGPersonalGearPresetHandle* CreateNewPresetFromEquipped(UObject* HandleOuter, ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPreviewPreset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipPreset();
    

    // Fix for true pure virtual functions not being implemented
};

