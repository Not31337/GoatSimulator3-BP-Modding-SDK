#pragma once
#include "CoreMinimal.h"
#include "GGGoatBroom_DelegateDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGGoatBroom_Delegate, AGGGoat*, Goat, bool, bIsDriver);

