#pragma once
#include "CoreMinimal.h"
#include "OnWidgetToggledDelegate.generated.h"

class UGGUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWidgetToggled, UGGUserWidget*, Widget, bool, Active);

