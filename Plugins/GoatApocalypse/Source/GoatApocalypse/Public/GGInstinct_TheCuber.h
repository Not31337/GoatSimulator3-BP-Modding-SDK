#pragma once
#include "CoreMinimal.h"
#include "GGInstinct.h"
#include "GGInstinct_TheCuber.generated.h"

class AGGPhysicsActor_CompactedCube;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGInstinct_TheCuber : public AGGInstinct {
    GENERATED_BODY()
public:
    AGGInstinct_TheCuber(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnCubeCountChanged(AGGPhysicsActor_CompactedCube* Cube);
    
};

