#pragma once
#include "CoreMinimal.h"
#include "GGAggregatedTick.generated.h"

class AGGCharacter;

USTRUCT(BlueprintType)
struct GOAT2_API FGGAggregatedTick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCharacter* Character;
    
    FGGAggregatedTick();
};

