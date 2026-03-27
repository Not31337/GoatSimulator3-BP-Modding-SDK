#pragma once
#include "CoreMinimal.h"
#include "EMoods.h"
#include "MoodTree.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct FMoodTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoods Mood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* MoodBehaviorTree;
    
    GOAT2_API FMoodTree();
};

