#pragma once
#include "CoreMinimal.h"
#include "GGInstinct.h"
#include "Templates/SubclassOf.h"
#include "GGInstinct_GrassHairGrow.generated.h"

class AGGGoat;
class USceneComponent;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGInstinct_GrassHairGrow : public AGGInstinct {
    GENERATED_BODY()
public:
    AGGInstinct_GrassHairGrow(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnGearUnEquipped(AGGGoat* Goat, const TArray<TSubclassOf<USceneComponent>>& GearEquipped);
    
};

