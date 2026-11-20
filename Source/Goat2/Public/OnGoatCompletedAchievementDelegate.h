#pragma once
#include "CoreMinimal.h"
#include "OnGoatCompletedAchievementDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoatCompletedAchievement, AGGGoat*, Goat, const FString&, AchievementID);

