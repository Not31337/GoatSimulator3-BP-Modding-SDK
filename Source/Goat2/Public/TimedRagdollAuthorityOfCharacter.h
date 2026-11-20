#pragma once
#include "CoreMinimal.h"
#include "TimedRagdollAuthorityOfCharacter.generated.h"

class AGGCharacter;

USTRUCT(BlueprintType)
struct FTimedRagdollAuthorityOfCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    GOAT2_API FTimedRagdollAuthorityOfCharacter();
};

