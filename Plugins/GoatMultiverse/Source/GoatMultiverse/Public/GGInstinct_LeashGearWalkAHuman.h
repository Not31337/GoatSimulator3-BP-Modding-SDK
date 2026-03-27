#pragma once
#include "CoreMinimal.h"
#include "GGInstinct.h"
#include "GGInstinct_LeashGearWalkAHuman.generated.h"

class AActor;
class UGGLeashComponent2;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGInstinct_LeashGearWalkAHuman : public AGGInstinct {
    GENERATED_BODY()
public:
    AGGInstinct_LeashGearWalkAHuman(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnActorLeashed(UGGLeashComponent2* LeashComponent, AActor* LeashedActor);
    
};

