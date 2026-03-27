#pragma once
#include "CoreMinimal.h"
#include "OnEnteredTeleportAreaDelegate.generated.h"

class AGGPlayerState;
class UGGTeleportAreaDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnteredTeleportArea, AGGPlayerState*, Player, UGGTeleportAreaDataAsset*, AreaAsset);

