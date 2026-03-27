#pragma once
#include "CoreMinimal.h"
#include "GGInstinct.h"
#include "GGInstinct_PieAPerson3Times.generated.h"

class AGGCharacter;
class AGGPie_Projectile;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGInstinct_PieAPerson3Times : public AGGInstinct {
    GENERATED_BODY()
public:
    AGGInstinct_PieAPerson3Times(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPieProjectileHitCharacter(AGGPie_Projectile* Projectile, AGGCharacter* Character);
    
};

