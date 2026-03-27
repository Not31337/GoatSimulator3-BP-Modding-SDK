#pragma once
#include "CoreMinimal.h"
#include "GGInstinct.h"
#include "GGInstinct_RideAsPassengerWithNPC.generated.h"

class AGGCharacter;
class AGGVehicle;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGInstinct_RideAsPassengerWithNPC : public AGGInstinct {
    GENERATED_BODY()
public:
    AGGInstinct_RideAsPassengerWithNPC(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
};

