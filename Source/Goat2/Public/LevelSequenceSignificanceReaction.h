#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceSignificanceActorSettings.h"
#include "LevelSequenceSignificanceReaction.generated.h"

USTRUCT(BlueprintType)
struct FLevelSequenceSignificanceReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceLowLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceHighLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelSequenceSignificanceActorSettings> ActorSettings;
    
    GOAT2_API FLevelSequenceSignificanceReaction();
};

