#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RecentlyStarledBy.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRecentlyStarledBy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> StartledByActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StartledByContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartleTimestamp;
    
    GOAT2_API FRecentlyStarledBy();
};

