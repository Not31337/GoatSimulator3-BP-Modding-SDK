#pragma once
#include "CoreMinimal.h"
#include "OnUnfrozenDelegate.generated.h"

class AGGCharacter;
class UGGFreezeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnfrozen, AGGCharacter*, Character, UGGFreezeComponent*, Component);

