#pragma once
#include "CoreMinimal.h"
#include "PortedNPC.generated.h"

class AGGNPC;
class AGGPlayerState;

USTRUCT(BlueprintType)
struct FPortedNPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* NPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PortedTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerState* Player;
    
    GEARPACK_FUTURE_API FPortedNPC();
};

