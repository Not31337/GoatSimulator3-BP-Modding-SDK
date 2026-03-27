#pragma once
#include "CoreMinimal.h"
#include "OnWidgetHoveredDelegate.generated.h"

class UGGUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWidgetHovered, UGGUserWidget*, Widget);

