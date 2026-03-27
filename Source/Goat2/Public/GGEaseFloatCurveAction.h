#pragma once
#include "CoreMinimal.h"
#include "GGAsyncActionBase.h"
#include "GGEaseFloatCurveAction.generated.h"

class UCurveFloat;
class UGGEaseFloatCurveAction;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGEaseFloatCurveAction : public UGGAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveAsset;
    
public:
    UGGEaseFloatCurveAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UGGEaseFloatCurveAction* CreateAction(UObject* WorldContext, FName ActionName, float Time, UCurveFloat* NewCurveAsset);
    
};

