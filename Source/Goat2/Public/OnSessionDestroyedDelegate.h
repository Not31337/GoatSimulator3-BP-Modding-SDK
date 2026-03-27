#pragma once
#include "CoreMinimal.h"
#include "OnSessionDestroyedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionDestroyed, bool, bSuccess);

