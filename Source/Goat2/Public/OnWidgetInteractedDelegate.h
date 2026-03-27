#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "OnWidgetInteractedDelegate.generated.h"

class UGGUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnWidgetInteracted, UGGUserWidget*, Widget, FPointerEvent, PointerEvent, FKeyEvent, KeyEvent);

