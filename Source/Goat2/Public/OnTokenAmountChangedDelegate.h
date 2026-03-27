#pragma once
#include "CoreMinimal.h"
#include "OnTokenAmountChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTokenAmountChanged, int32, Amount, const FString&, AcquireID, const FString&, AcquireSource);

