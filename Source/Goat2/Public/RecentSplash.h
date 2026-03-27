#pragma once
#include "CoreMinimal.h"
#include "RecentSplash.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRecentSplash {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SplashedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    GOAT2_API FRecentSplash();
};

