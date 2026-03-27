#pragma once
#include "CoreMinimal.h"
#include "OnPlayersLeavingFullParticipationAreaDelegate.generated.h"

class UGGTeleportAreaDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayersLeavingFullParticipationArea, int32, AreaSlot, UGGTeleportAreaDataAsset*, AreaAsset);

