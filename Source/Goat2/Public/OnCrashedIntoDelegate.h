#pragma once
#include "CoreMinimal.h"
#include "OnCrashedIntoDelegate.generated.h"

class AActor;
class AGGGoat;
class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCrashedInto, AGGGoat*, Goat, AGGVehicle*, Vehicle, AActor*, IntoActor);

