#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGGoatGearDataAssetInterface.h"
#include "GGGoatGearStyleDataAsset.generated.h"

class UGGGoatGearInfoDataAsset;
class USceneComponent;
class UTexture2D;

UCLASS(Blueprintable)
class GOAT2_API UGGGoatGearStyleDataAsset : public UPrimaryDataAsset, public IGGGoatGearDataAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StyleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StyleIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USceneComponent> GoatGearStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGGGoatGearInfoDataAsset> ParentGoatGear;
    
    UGGGoatGearStyleDataAsset();


    // Fix for true pure virtual functions not being implemented
};

