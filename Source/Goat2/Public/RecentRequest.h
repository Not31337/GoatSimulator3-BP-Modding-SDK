#pragma once
#include "CoreMinimal.h"
#include "RecentRequest.generated.h"

class AGGNPC;

USTRUCT(BlueprintType)
struct FRecentRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* NPC;
    
    GOAT2_API FRecentRequest();
};

