#pragma once
#include "CoreMinimal.h"
#include "EHeadTurning.h"
#include "HeadTurnState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHeadTurnState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeadTurning HeadTurningState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LookAtActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bBlackboardValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bWaypointValue;
    
    GOAT2_API FHeadTurnState();
};

