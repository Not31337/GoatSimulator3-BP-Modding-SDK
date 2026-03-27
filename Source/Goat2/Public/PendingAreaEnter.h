#pragma once
#include "CoreMinimal.h"
#include "PendingAreaEnter.generated.h"

class AGGPlayerController;
class UGGTeleportAreaDataAsset;

USTRUCT(BlueprintType)
struct FPendingAreaEnter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGTeleportAreaDataAsset* AreaAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasStartedFinalTeleport;
    
    GOAT2_API FPendingAreaEnter();
};

