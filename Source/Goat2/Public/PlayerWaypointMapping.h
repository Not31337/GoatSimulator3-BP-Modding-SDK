#pragma once
#include "CoreMinimal.h"
#include "PlayerWaypointMapping.generated.h"

class AActor;
class AGGPlayerState;

USTRUCT(BlueprintType)
struct FPlayerWaypointMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerState* WaypointOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WaypointActor;
    
    GOAT2_API FPlayerWaypointMapping();
};

