#pragma once
#include "CoreMinimal.h"
#include "ELSMovementDirection.h"
#include "LSPivotParams.generated.h"

USTRUCT(BlueprintType)
struct FLSPivotParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELSMovementDirection CompletedMovementDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletedStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELSMovementDirection InterruptedMovmentDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterruptedStartTime;
    
    GOAT2_API FLSPivotParams();
};

