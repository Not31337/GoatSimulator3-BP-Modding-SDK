#pragma once
#include "CoreMinimal.h"
#include "FollowSplineData.generated.h"

USTRUCT(BlueprintType)
struct FFollowSplineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    GOATTHEMEPARK_API FFollowSplineData();
};

