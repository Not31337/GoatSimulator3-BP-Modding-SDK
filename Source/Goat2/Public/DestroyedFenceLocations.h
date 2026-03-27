#pragma once
#include "CoreMinimal.h"
#include "DestroyedFenceLocations.generated.h"

USTRUCT(BlueprintType)
struct FDestroyedFenceLocations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DestroyedLocations;
    
    GOAT2_API FDestroyedFenceLocations();
};

