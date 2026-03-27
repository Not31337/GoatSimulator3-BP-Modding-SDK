#pragma once
#include "CoreMinimal.h"
#include "CommandCooldown.generated.h"

class AGGNPC;

USTRUCT(BlueprintType)
struct FCommandCooldown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* NPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownLength;
    
    GOAT2_API FCommandCooldown();
};

