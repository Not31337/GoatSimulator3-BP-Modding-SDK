#pragma once
#include "CoreMinimal.h"
#include "ChaosCounterCooldownSetting.generated.h"

USTRUCT(BlueprintType)
struct FChaosCounterCooldownSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChaosSourceFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownLength;
    
    GOAT2_API FChaosCounterCooldownSetting();
};

