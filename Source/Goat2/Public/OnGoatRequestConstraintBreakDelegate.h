#pragma once
#include "CoreMinimal.h"
#include "OnGoatRequestConstraintBreakDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGoatRequestConstraintBreak, AGGGoat*, Goat);

