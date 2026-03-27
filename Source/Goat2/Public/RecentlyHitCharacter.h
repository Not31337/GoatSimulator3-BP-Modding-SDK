#pragma once
#include "CoreMinimal.h"
#include "RecentlyHitCharacter.generated.h"

class AGGCharacter;

USTRUCT(BlueprintType)
struct FRecentlyHitCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCharacter* HitCharacter;
    
    GOAT2_API FRecentlyHitCharacter();
};

