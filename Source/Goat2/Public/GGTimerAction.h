#pragma once
#include "CoreMinimal.h"
#include "GGAsyncActionBase.h"
#include "GGTimerAction.generated.h"

class UGGTimerAction;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGTimerAction : public UGGAsyncActionBase {
    GENERATED_BODY()
public:
    UGGTimerAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UGGTimerAction* CreateAction(UObject* WorldContext, FName ActionName, float Time);
    
};

