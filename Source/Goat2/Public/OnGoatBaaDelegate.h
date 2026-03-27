#pragma once
#include "CoreMinimal.h"
#include "OnGoatBaaDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGoatBaa, AGGGoat*, GoatBaaing);

