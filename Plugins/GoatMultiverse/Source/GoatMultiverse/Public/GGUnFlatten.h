#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGUnFlatten.generated.h"

class UGGEaseFloatCurveAction;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATMULTIVERSE_API UGGUnFlatten : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGEaseFloatCurveAction* Curve;
    
    UGGUnFlatten(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateMeshScale(float CurveAlpha);
    
    UFUNCTION(BlueprintCallable)
    void ScalingFinished();
    
};

