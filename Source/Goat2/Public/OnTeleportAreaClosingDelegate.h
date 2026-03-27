#pragma once
#include "CoreMinimal.h"
#include "OnTeleportAreaClosingDelegate.generated.h"

class UGGTeleportAreaDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTeleportAreaClosing, int32, AreaSlot, UGGTeleportAreaDataAsset*, AreaAsset);

