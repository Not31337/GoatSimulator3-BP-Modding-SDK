#pragma once
#include "CoreMinimal.h"
#include "OnBeingMountedDelegate.generated.h"

class AGGCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBeingMounted, AGGCharacter*, Mount, AGGCharacter*, RidingCharacter);

