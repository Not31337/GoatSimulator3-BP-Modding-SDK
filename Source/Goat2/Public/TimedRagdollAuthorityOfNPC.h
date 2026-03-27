#pragma once
#include "CoreMinimal.h"
#include "TimedRagdollAuthorityOfNPC.generated.h"

class AGGNPC;

USTRUCT(BlueprintType)
struct FTimedRagdollAuthorityOfNPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* NPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    GOAT2_API FTimedRagdollAuthorityOfNPC();
};

