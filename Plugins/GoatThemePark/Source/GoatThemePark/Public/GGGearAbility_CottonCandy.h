#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "GGGearAbility_CottonCandy.generated.h"

class UGGGoatGear_Body_CottonCandy;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API UGGGearAbility_CottonCandy : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Body_CottonCandy* CottonCandyGear;
    
    UGGGearAbility_CottonCandy();

};

