#pragma once
#include "CoreMinimal.h"
#include "ELoadingScreenStage.h"
#include "OnTeleportStageUpdateDelegate.generated.h"

class AGGGoat;
class AGGPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnTeleportStageUpdate, AGGPlayerController*, Controller, AGGGoat*, Goat, ELoadingScreenStage, CurrentStage);

