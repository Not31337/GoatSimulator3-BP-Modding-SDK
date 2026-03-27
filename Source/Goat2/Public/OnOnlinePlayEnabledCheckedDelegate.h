#pragma once
#include "CoreMinimal.h"
#include "OnOnlinePlayEnabledCheckedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnOnlinePlayEnabledChecked, bool, bHasOnlinePlayEnabled);

