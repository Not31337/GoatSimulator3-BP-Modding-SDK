#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GGRaceMinigameCheckpointInterface.generated.h"

class AGGVehicle;

UINTERFACE(Blueprintable)
class GOAT2_API UGGRaceMinigameCheckpointInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGRaceMinigameCheckpointInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetCheckpoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideCheckpoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCheckpointCrossed(AGGVehicle* Vehicle);
    
};

