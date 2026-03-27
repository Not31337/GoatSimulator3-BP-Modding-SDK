#pragma once
#include "CoreMinimal.h"
#include "GGInstinct.h"
#include "GGInstinct_LyrePlacement.generated.h"

class AGGLyre;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGInstinct_LyrePlacement : public AGGInstinct {
    GENERATED_BODY()
public:
    AGGInstinct_LyrePlacement(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnLyreSpawned(AGGLyre* Lyre);
    
};

