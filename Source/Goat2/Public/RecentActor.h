#pragma once
#include "CoreMinimal.h"
#include "RecentActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRecentActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    GOAT2_API FRecentActor();
};

