#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "GGGearAbility_DamageHat.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_DamageHat : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Power;
    
    UGGGearAbility_DamageHat();

};

