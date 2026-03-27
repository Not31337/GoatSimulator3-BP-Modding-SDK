#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "GGGearAbility_Saw.generated.h"

class AGGCharacter;
class AGGVehicle;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGGearAbility_Saw : public UGGGearAbility {
    GENERATED_BODY()
public:
    UGGGearAbility_Saw();

    UFUNCTION(BlueprintCallable)
    void HandleGoatEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
};

