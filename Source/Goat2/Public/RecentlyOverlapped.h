#pragma once
#include "CoreMinimal.h"
#include "RecentlyOverlapped.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRecentlyOverlapped {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OverlappedActor;
    
    GOAT2_API FRecentlyOverlapped();
};

