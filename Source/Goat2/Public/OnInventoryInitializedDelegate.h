#pragma once
#include "CoreMinimal.h"
#include "OnInventoryInitializedDelegate.generated.h"

class UGGInventory;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryInitialized, UGGInventory*, Inventory);

