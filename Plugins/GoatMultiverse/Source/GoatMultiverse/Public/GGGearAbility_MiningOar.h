#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "GGGearAbility_MiningOar.generated.h"

class AGGCharacter;
class AGGVehicle;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API UGGGearAbility_MiningOar : public UGGGearAbility {
    GENERATED_BODY()
public:
    UGGGearAbility_MiningOar();

    UFUNCTION(BlueprintCallable)
    void HandleGoatEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
};

