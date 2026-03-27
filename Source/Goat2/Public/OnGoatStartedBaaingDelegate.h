#pragma once
#include "CoreMinimal.h"
#include "OnGoatStartedBaaingDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGoatStartedBaaing, AGGGoat*, GoatBaaing);

