#pragma once
#include "CoreMinimal.h"
#include "GardenerPlantGrown_DelegateDelegate.generated.h"

class AGGGardenerPlant;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGardenerPlantGrown_Delegate, AGGGardenerPlant*, Plant);

