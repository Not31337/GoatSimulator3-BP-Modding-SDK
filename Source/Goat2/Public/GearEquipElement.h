#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GearEquipElement.generated.h"

class UGGGoatGearInfoDataAsset;
class USceneComponent;

USTRUCT(BlueprintType)
struct FGearEquipElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USceneComponent> GearClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGiveAbility;
    
    GOAT2_API FGearEquipElement();
};

