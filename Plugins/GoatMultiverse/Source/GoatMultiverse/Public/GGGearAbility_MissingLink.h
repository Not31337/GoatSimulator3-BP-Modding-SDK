#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GGGearAbility_MissingLink.generated.h"

class AGGGoat;
class UGGAlternativeGoatDataAsset;
class UGGGoatGearInfoDataAsset;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API UGGGearAbility_MissingLink : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AppearancePartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AppearanceAreaTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConvertPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGAlternativeGoatDataAsset* MissingLinkAltGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* MissingLinkGearAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ScanBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGGoatGearInfoDataAsset*> FurColors;
    
public:
    UGGGearAbility_MissingLink();

protected:
    UFUNCTION(BlueprintCallable)
    void OnScannerFinished();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastUnlockMissingLinkGoat(AGGGoat* TargetGoat);
    
};

