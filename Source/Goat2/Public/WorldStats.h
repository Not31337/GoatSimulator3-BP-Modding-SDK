#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WorldStats.generated.h"

USTRUCT(BlueprintType)
struct FWorldStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompletedQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SyncedGoatTowers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChaosEarned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> LastWorldAreas;
    
    GOAT2_API FWorldStats();
};

