#pragma once
#include "CoreMinimal.h"
#include "GGOnCockroachKilledDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGOnCockroachKilled, AGGGoat*, Player);

