#pragma once
#include "CoreMinimal.h"
#include "OnOptionFocusedDelegate.generated.h"

class UGGOptionContainerUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOptionFocused, UGGOptionContainerUserWidget*, Widget);

