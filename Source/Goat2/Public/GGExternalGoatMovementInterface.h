#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GGExternalGoatMovementInterface.generated.h"

class UGGGoatMovementComponent;

UINTERFACE(Blueprintable)
class GOAT2_API UGGExternalGoatMovementInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGExternalGoatMovementInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PhysCustom(UGGGoatMovementComponent* GoatMovementComp, float DeltaTime, int32 Iterations);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ExternalAllowJump();
    
};

