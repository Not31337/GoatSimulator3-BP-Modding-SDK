#pragma once
#include "CoreMinimal.h"
#include "CactusStreakCactusDestroyedDelegate.generated.h"

class AGGPlayerState_Apocalypse;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCactusStreakCactusDestroyed, AGGPlayerState_Apocalypse*, Player, int32, IncreaseBy);

