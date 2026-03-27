#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AdvancedRule.h"
#include "QuestCategory.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FQuestCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAdvancedRule> CategoryFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    GOAT2_API FQuestCategory();
};

