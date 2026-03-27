#pragma once
#include "CoreMinimal.h"
#include "GGBeeSwarmFinishedAttack_DelegateDelegate.generated.h"

class AGGCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGBeeSwarmFinishedAttack_Delegate, AGGCharacter*, PreviousAttackTarget);

