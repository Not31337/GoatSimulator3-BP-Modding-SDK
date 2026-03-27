#pragma once
#include "CoreMinimal.h"
#include "OnRepDriverChangedDelegate.generated.h"

class AGGCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRepDriverChanged, AGGCharacter*, NewDriver);

