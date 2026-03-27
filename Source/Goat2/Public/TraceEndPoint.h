#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "TraceEndPoint.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FTraceEndPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 TraceEndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceHitStatus;
    
    FTraceEndPoint();
};

