#pragma once
#include "CoreMinimal.h"
#include "OnTeleportAreaOpeningDelegate.generated.h"

class UGGTeleportAreaDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTeleportAreaOpening, int32, AreaSlot, UGGTeleportAreaDataAsset*, AreaAsset);

