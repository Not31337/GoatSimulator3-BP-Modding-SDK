#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "OnWidgetAddedToFocusPathDelegate.generated.h"

class UGGUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWidgetAddedToFocusPath, UGGUserWidget*, Widget, FFocusEvent, InFocusEvent);

