#pragma once
#include "CoreMinimal.h"
#include "OnStartingToLeaveAreaDelegate.generated.h"

class AGGPlayerState;
class UGGTeleportAreaDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartingToLeaveArea, AGGPlayerState*, Player, UGGTeleportAreaDataAsset*, AreaAsset);

