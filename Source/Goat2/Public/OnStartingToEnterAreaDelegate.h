#pragma once
#include "CoreMinimal.h"
#include "OnStartingToEnterAreaDelegate.generated.h"

class AGGPlayerState;
class UGGTeleportAreaDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartingToEnterArea, AGGPlayerState*, Player, UGGTeleportAreaDataAsset*, AreaAsset);

