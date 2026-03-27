#pragma once
#include "CoreMinimal.h"
#include "OnWidgetDoubleClickedDelegate.generated.h"

class UGGUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWidgetDoubleClicked, UGGUserWidget*, Widget);

