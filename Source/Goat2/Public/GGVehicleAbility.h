#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GGVehicleAbility.generated.h"

class AGGVehicle;

UCLASS(Blueprintable)
class GOAT2_API UGGVehicleAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
    UGGVehicleAbility();

    UFUNCTION(BlueprintCallable)
    void TickAbility(float DeltaTime, AGGVehicle* Goat);
    
};

