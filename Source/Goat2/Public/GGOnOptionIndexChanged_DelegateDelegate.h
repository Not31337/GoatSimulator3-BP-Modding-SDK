#pragma once
#include "CoreMinimal.h"
#include "GGOnOptionIndexChanged_DelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGOnOptionIndexChanged_Delegate, int32, NewIndex);

