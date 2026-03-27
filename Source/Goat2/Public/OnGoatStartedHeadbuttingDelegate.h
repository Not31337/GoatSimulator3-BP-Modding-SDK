#pragma once
#include "CoreMinimal.h"
#include "OnGoatStartedHeadbuttingDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGoatStartedHeadbutting, AGGGoat*, GoatHeadbutting);

