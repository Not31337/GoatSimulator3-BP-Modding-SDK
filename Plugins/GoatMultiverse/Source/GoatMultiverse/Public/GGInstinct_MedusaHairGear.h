#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGInstinct.h"
#include "GGInstinct_MedusaHairGear.generated.h"

class AGGGoat;
class UGGFreezeComponent;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGInstinct_MedusaHairGear : public AGGInstinct {
    GENERATED_BODY()
public:
    AGGInstinct_MedusaHairGear(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnMedusaGearAbiltiyActivated(AGGGoat* Goat, const TArray<UGGFreezeComponent*>& FrozenActors);
    
    UFUNCTION(BlueprintCallable)
    void OnInstinctTriggered(AGGGoat* Goat, FGameplayTag InstinctTag);
    
};

