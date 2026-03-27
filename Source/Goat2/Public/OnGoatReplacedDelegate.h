#pragma once
#include "CoreMinimal.h"
#include "OnGoatReplacedDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoatReplaced, AGGGoat*, OldGoat, AGGGoat*, NewGoat);

