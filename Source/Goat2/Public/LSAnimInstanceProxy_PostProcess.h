#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "LSAnimInstanceProxy_PostProcess.generated.h"

class ULSAnimInstance_PostProcess;

USTRUCT(BlueprintType)
struct GOAT2_API FLSAnimInstanceProxy_PostProcess : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULSAnimInstance_PostProcess* LSAnimInstance;
    
public:
    FLSAnimInstanceProxy_PostProcess();
};

