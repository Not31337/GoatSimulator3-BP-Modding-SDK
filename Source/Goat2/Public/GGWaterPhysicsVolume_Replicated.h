#pragma once
#include "CoreMinimal.h"
#include "GGWaterPhysicsVolume.h"
#include "GGWaterPhysicsVolume_Replicated.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGWaterPhysicsVolume_Replicated : public AGGWaterPhysicsVolume {
    GENERATED_BODY()
public:
    AGGWaterPhysicsVolume_Replicated(const FObjectInitializer& ObjectInitializer);

};

