#pragma once
#include "CoreMinimal.h"
#include "OnHandlerGoatBaaDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHandlerGoatBaa, AGGGoat*, Goat);

