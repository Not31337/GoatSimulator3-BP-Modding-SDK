#pragma once
#include "CoreMinimal.h"
#include "EPlayerGamePhase.h"
#include "OnPlayerGamePhaseChangedDelegate.generated.h"

class AGGPlayerGame_Base;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerGamePhaseChanged, AGGPlayerGame_Base*, PlayerGame, TEnumAsByte<EPlayerGamePhase::Type>, NewPhase);

