#pragma once
#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "QuestReward.h"
#include "QuestTier.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FQuestTier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt TargetProgress;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt UpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestReward Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    FQuestTier();
};

