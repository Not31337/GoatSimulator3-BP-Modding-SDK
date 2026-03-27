#pragma once
#include "CoreMinimal.h"
#include "ChaosCounterCooldownEntry.generated.h"

USTRUCT(BlueprintType)
struct FChaosCounterCooldownEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChaosSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntryTimestamp;
    
    GOAT2_API FChaosCounterCooldownEntry();
};

