#pragma once
#include "CoreMinimal.h"
#include "OnLocalGoatActionInputDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLocalGoatActionInput, AGGGoat*, Goat);

