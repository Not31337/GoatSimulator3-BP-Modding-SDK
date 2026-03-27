#pragma once
#include "CoreMinimal.h"
#include "NPCGroupElement.generated.h"

class AGGNPC;

USTRUCT(BlueprintType)
struct FNPCGroupElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* NPC;
    
    GOAT2_API FNPCGroupElement();
};

