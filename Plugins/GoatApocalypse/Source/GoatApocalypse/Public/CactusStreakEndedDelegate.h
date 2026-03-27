#pragma once
#include "CoreMinimal.h"
#include "CactusStreakEndedDelegate.generated.h"

class AGGPlayerState_Apocalypse;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FCactusStreakEnded, AGGPlayerState_Apocalypse*, Player, int32, CactusCount, bool, bNewHighScore, int32, HighScore);

