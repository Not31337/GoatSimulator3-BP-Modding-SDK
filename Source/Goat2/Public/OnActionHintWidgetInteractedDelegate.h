#pragma once
#include "CoreMinimal.h"
#include "ActionHintStruct.h"
#include "OnActionHintWidgetInteractedDelegate.generated.h"

class UGGUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActionHintWidgetInteracted, UGGUserWidget*, Widget, FActionHintStruct, ActionHint);

