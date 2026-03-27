#pragma once
#include "CoreMinimal.h"
#include "AccountLinkedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAccountLinked, bool, bSuccess);

