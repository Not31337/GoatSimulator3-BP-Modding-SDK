#pragma once
#include "CoreMinimal.h"
#include "OnInstinctRemovePinDelegate.generated.h"

class AGGInstinct;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInstinctRemovePin, AGGInstinct*, Instinct);

