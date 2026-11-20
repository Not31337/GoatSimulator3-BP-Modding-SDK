#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GGInstinct.h"
#include "GGInstinct_CoasterCoilSpeed.generated.h"

class AGGGoat;
class UGGGrindableSplineComponent;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGInstinct_CoasterCoilSpeed : public AGGInstinct {
    GENERATED_BODY()
public:
    AGGInstinct_CoasterCoilSpeed(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnGrindHyperspeedStart(UGGGrindableSplineComponent* GrindSpline);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatMovementModeChanged(AGGGoat* Goat, TEnumAsByte<EMovementMode> NewMovement, uint8 NewCustomMovement, TEnumAsByte<EMovementMode> PrevMovement, uint8 PrevCustomMovement);
    
};

