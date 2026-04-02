#pragma once
#include "CoreMinimal.h"
#include "ExplodedNPCs.generated.h"

class AGGNPC;

USTRUCT(BlueprintType)
struct FExplodedNPCs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* NPC;
    
    GEARPACK_FUTURE_API FExplodedNPCs();
};

