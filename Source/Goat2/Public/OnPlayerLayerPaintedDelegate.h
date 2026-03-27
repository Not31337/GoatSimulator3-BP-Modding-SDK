#pragma once
#include "CoreMinimal.h"
#include "OnPlayerLayerPaintedDelegate.generated.h"

class ULocalPlayer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerLayerPainted, ULocalPlayer*, LocalPlayer);

