#pragma once
#include "CoreMinimal.h"
#include "CactusStreakStartedDelegate.generated.h"

class AGGPlayerState_Apocalypse;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCactusStreakStarted, AGGPlayerState_Apocalypse*, Player);

