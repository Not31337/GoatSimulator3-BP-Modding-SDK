#pragma once
#include "CoreMinimal.h"
#include "EGearEquipContext.h"
#include "GearLoadElement.generated.h"

class UGGGoatGearInfoDataAsset;
class UGGGoatGearStyleDataAsset;
class USceneComponent;

USTRUCT(BlueprintType)
struct FGearLoadElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USceneComponent> GearClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearStyleDataAsset* StyleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGiveAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGearEquipContext EquipContext;
    
    GOAT2_API FGearLoadElement();
};

