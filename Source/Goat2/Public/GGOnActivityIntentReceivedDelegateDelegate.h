#pragma once
#include "CoreMinimal.h"
#include "GGOnActivityIntentReceivedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGOnActivityIntentReceivedDelegate, const FString&, ActivityId);

