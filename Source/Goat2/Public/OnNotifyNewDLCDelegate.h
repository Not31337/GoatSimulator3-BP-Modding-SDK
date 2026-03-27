#pragma once
#include "CoreMinimal.h"
#include "OnNotifyNewDLCDelegate.generated.h"

class UGGDLCDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNotifyNewDLC, const UGGDLCDataAsset*, DLCDataAsset);

