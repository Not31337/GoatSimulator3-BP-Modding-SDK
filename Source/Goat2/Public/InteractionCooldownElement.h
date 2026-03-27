#pragma once
#include "CoreMinimal.h"
#include "ENPCInteractions.h"
#include "InteractionCooldownElement.generated.h"

class AGGCharacter;

USTRUCT(BlueprintType)
struct FInteractionCooldownElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCInteractions Interaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionTimestamp;
    
    GOAT2_API FInteractionCooldownElement();
};

