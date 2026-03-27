#pragma once
#include "CoreMinimal.h"
#include "AreaCheckpoint.generated.h"

class AGGTeleportAreaEntrance;
class AGGTeleportAreaPlayerStart;

USTRUCT(BlueprintType)
struct FAreaCheckpoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CheckpointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGTeleportAreaEntrance* EntranceToMakeMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGTeleportAreaPlayerStart* RespawnPlayerStart;
    
    GOAT2_API FAreaCheckpoint();
};

