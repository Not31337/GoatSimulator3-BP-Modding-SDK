#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GGEventActivatorInterface.generated.h"

UINTERFACE(Blueprintable)
class GOAT2_API UGGEventActivatorInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGEventActivatorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SpawnEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetSqrdDistances(float& SqrdMaxRelevantDist, float& SqrdMinRelevantDist);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EnableEventActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActivate(float SpawnAttemptDelay);
    
};

