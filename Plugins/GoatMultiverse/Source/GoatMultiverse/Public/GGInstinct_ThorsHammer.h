#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GGInstinct.h"
#include "GGInstinct_ThorsHammer.generated.h"

class ACharacter;
class AGGGoat;
class AGGThorsHammerProjectile;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGInstinct_ThorsHammer : public AGGInstinct {
    GENERATED_BODY()
public:
    AGGInstinct_ThorsHammer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTeleportedToThorsHammer(AGGGoat* Goat, AGGThorsHammerProjectile* Hammer);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatChangedMovementMode(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
};

