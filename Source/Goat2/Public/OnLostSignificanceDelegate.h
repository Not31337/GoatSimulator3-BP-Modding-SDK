#pragma once
#include "CoreMinimal.h"
#include "OnLostSignificanceDelegate.generated.h"

class UGGDynamicAssetHoldingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLostSignificance, UGGDynamicAssetHoldingComponent*, DynAssetComp);

