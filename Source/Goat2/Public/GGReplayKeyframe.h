#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGReplayKeyframe.generated.h"

USTRUCT(BlueprintType)
struct FGGReplayKeyframe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform KeyframeTransform;
    
    GOAT2_API FGGReplayKeyframe();
};

