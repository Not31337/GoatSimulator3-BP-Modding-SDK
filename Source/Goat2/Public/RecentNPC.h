#pragma once
#include "CoreMinimal.h"
#include "RecentNPC.generated.h"

class AGGNPC;

USTRUCT(BlueprintType)
struct FRecentNPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* RecentNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftEventTimestamp;
    
    GOAT2_API FRecentNPC();
};

