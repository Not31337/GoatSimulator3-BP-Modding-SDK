#pragma once
#include "CoreMinimal.h"
#include "QuestStep.h"
#include "QuestStepTier.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FQuestStepTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustBeCompletedInOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceCompletePrevious;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesSavedCompletedOrderIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestStep> Steps;
    
    FQuestStepTier();
};

