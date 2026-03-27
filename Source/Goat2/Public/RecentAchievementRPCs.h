#pragma once
#include "CoreMinimal.h"
#include "RecentAchievementRPCs.generated.h"

class AGGPlayerController;

USTRUCT(BlueprintType)
struct FRecentAchievementRPCs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> RecentlySentAchievements;
    
    GOAT2_API FRecentAchievementRPCs();
};

