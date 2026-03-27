#pragma once
#include "CoreMinimal.h"
#include "GoatEventDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGoatEvent, AGGGoat*, Goat);

