#pragma once
#include "CoreMinimal.h"
#include "GGGrindableSpline.h"
#include "GGTargetConnectionInfo.h"
#include "GGGrindablePowerLineBase.generated.h"

class AGGGrindablePowerLineBase;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class GOAT2_API AGGGrindablePowerLineBase : public AGGGrindableSpline {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGTargetConnectionInfo> TargetConnectionInfos;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AGGGrindablePowerLineBase>> ConnectedGrindableSplines;
    
    AGGGrindablePowerLineBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSplinesConnections();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetupSplines(const TArray<USceneComponent*>& StartPoints, const TArray<USceneComponent*>& EndPoints);
    
};

