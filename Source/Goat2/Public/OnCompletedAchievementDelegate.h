#pragma once
#include "CoreMinimal.h"
#include "OnCompletedAchievementDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompletedAchievement, const FString&, AchievementID);

