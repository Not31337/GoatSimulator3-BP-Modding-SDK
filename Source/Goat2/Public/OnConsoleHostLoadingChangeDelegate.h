#pragma once
#include "CoreMinimal.h"
#include "OnConsoleHostLoadingChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConsoleHostLoadingChange, bool, bIsHostLoading);

