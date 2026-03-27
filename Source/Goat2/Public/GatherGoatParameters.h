#pragma once
#include "CoreMinimal.h"
#include "GatherGoatParameters.generated.h"

class AActor;
class AGGPlayerState;

USTRUCT(BlueprintType)
struct FGatherGoatParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GatherAroundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceConsideredNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPlayerState*> PlayersToIgnore;
    
    GOAT2_API FGatherGoatParameters();
};

