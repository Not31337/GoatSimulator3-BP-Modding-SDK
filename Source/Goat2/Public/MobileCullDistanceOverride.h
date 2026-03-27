#pragma once
#include "CoreMinimal.h"
#include "MobileCullDistanceOverride.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMobileCullDistanceOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistanceOverride;
    
    GOAT2_API FMobileCullDistanceOverride();
};

