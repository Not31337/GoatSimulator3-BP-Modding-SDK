#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "OnWidgetRemovedFromFocusPathDelegate.generated.h"

class UGGUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWidgetRemovedFromFocusPath, UGGUserWidget*, Widget, FFocusEvent, InFocusEvent);

