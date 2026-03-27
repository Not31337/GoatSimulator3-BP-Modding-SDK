#pragma once
#include "CoreMinimal.h"
#include "OnLeftTeleportAreaDelegate.generated.h"

class AGGPlayerState;
class UGGTeleportAreaDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLeftTeleportArea, AGGPlayerState*, Player, UGGTeleportAreaDataAsset*, AreaAsset);

