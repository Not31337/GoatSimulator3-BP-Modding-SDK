#pragma once
#include "CoreMinimal.h"
#include "OnGoatStartedLickingDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGoatStartedLicking, AGGGoat*, GoatLicking);

