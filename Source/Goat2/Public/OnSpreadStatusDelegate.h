#pragma once
#include "CoreMinimal.h"
#include "EApplicationMethod.h"
#include "OnSpreadStatusDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSpreadStatus, AActor*, SpreadTo, EApplicationMethod, ApplicationMethod, bool, bSpreadToSource);

