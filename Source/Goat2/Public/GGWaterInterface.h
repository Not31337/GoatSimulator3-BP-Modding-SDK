#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GGWaterInterface.generated.h"

class APhysicsVolume;

UINTERFACE(Blueprintable)
class GOAT2_API UGGWaterInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGWaterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InWater();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    APhysicsVolume* GetPhysicsVolume();
    
};

