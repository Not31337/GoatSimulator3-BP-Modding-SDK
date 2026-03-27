#pragma once
#include "CoreMinimal.h"
#include "PathPrioMapping.generated.h"

USTRUCT(BlueprintType)
struct FPathPrioMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Prio;
    
    GOAT2_API FPathPrioMapping();
};

