#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnMouseMoveEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMouseMoveEvent, FVector2D, ScreenSpaceTouchPosition);

