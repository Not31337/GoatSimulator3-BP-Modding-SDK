#pragma once
#include "CoreMinimal.h"
#include "GGTargetConnectionInfo.generated.h"

class AGGGrindablePowerLineBase;

USTRUCT(BlueprintType)
struct GOAT2_API FGGTargetConnectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGrindablePowerLineBase* TargetToConnectTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartConnectPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndConnectPoint;
    
    FGGTargetConnectionInfo();
};

