#pragma once
#include "CoreMinimal.h"
#include "GGToxicBarrelDisposed_DelegateDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGToxicBarrelDisposed_Delegate, AGGGoat*, Goat);

