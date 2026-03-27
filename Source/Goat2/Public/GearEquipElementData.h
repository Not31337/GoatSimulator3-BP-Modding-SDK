#pragma once
#include "CoreMinimal.h"
#include "GearEquipElementData.generated.h"

class UGGGoatGearInfoDataAsset;
class UGGGoatGearStyleDataAsset;

USTRUCT(BlueprintType)
struct FGearEquipElementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGiveAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearStyleDataAsset* StyleData;
    
    GOAT2_API FGearEquipElementData();
};

