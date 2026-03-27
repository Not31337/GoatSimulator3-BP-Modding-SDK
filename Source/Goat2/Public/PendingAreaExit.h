#pragma once
#include "CoreMinimal.h"
#include "PendingAreaExit.generated.h"

class AGGPlayerController;

USTRUCT(BlueprintType)
struct FPendingAreaExit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasStartedFinalTeleport;
    
    GOAT2_API FPendingAreaExit();
};

