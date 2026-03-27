#pragma once
#include "CoreMinimal.h"
#include "OnGoatMissedLickDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGoatMissedLick, AGGGoat*, GoatLicking);

