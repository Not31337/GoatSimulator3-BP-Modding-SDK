#pragma once
#include "CoreMinimal.h"
#include "OnPlayingCinematicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayingCinematic, bool, bCinematicFinished);

