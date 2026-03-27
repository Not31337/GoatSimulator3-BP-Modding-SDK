#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CompletedEventTags.generated.h"

USTRUCT(BlueprintType)
struct FCompletedEventTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasInitializedOnServer;
    
    GOAT2_API FCompletedEventTags();
};

