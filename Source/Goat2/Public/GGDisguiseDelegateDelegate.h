#pragma once
#include "CoreMinimal.h"
#include "GGDisguiseDelegateDelegate.generated.h"

class UGGDisguiseComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGDisguiseDelegate, UGGDisguiseComponent*, DisguiseComponent);

