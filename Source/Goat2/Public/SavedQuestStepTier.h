#pragma once
#include "CoreMinimal.h"
#include "SavedQuestStep.h"
#include "SavedQuestStepTier.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FSavedQuestStepTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedQuestStep> Steps;
    
    FSavedQuestStepTier();
};

