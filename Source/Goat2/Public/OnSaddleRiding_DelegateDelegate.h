#pragma once
#include "CoreMinimal.h"
#include "OnSaddleRiding_DelegateDelegate.generated.h"

class AGGCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSaddleRiding_Delegate, AGGCharacter*, RidingCharacter);

