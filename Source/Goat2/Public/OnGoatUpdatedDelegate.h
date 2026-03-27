#pragma once
#include "CoreMinimal.h"
#include "OnGoatUpdatedDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGoatUpdated, AGGGoat*, NewGoat);

