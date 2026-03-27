#pragma once
#include "CoreMinimal.h"
#include "GGRecentlyHitActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GOAT2_API FGGRecentlyHitActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HitActor;
    
    FGGRecentlyHitActor();
};

