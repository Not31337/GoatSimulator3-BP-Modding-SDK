#pragma once
#include "CoreMinimal.h"
#include "GGAchievementCompleted_DelegateDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGAchievementCompleted_Delegate, AGGGoat*, Player);

