#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "GGAsyncActionBase.h"
#include "GGEaseFloatFunctionAction.generated.h"

class UGGEaseFloatFunctionAction;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGEaseFloatFunctionAction : public UGGAsyncActionBase {
    GENERATED_BODY()
public:
    UGGEaseFloatFunctionAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UGGEaseFloatFunctionAction* CreateAction(UObject* WorldContext, FName ActionName, float Time, float From, float To, TEnumAsByte<EEasingFunc::Type> EasingFunc);
    
};

