#pragma once
#include "CoreMinimal.h"
#include "ENPCInteractions.h"
#include "NPCInteractionCooldown.generated.h"

USTRUCT(BlueprintType)
struct FNPCInteractionCooldown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCInteractions Interaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTime;
    
    GOAT2_API FNPCInteractionCooldown();
};

