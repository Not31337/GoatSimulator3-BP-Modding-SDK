#pragma once
#include "CoreMinimal.h"
#include "GGSmoothNetInterpolate.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGSmoothNetInterpolate {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float SmoothLocationTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float SmoothRotationTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float NoSmoothNetUpdateDist;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bIsSupportingClientAuthority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bUseVelocityForInterpolationSpeed;
    
    FGGSmoothNetInterpolate();
};

