#pragma once
#include "CoreMinimal.h"
#include "SavedQuestStep.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FSavedQuestStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompletionOrderIndex;
    
    FSavedQuestStep();
};

