#pragma once
#include "CoreMinimal.h"
#include "OnCollisionStateUpdateDelegate.generated.h"

class AGGCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCollisionStateUpdate, AGGCharacter*, Character);

