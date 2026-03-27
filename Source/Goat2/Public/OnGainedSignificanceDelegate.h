#pragma once
#include "CoreMinimal.h"
#include "OnGainedSignificanceDelegate.generated.h"

class UGGDynamicAssetHoldingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGainedSignificance, UGGDynamicAssetHoldingComponent*, DynAssetComp);

