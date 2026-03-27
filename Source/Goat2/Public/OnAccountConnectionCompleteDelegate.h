#pragma once
#include "CoreMinimal.h"
#include "EGGAccountConnectionResult.h"
#include "OnAccountConnectionCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAccountConnectionComplete, const FName, CurrentPlatform, EGGAccountConnectionResult, Result);

