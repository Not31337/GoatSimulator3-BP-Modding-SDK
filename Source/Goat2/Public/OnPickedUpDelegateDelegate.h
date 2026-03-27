#pragma once
#include "CoreMinimal.h"
#include "OnPickedUpDelegateDelegate.generated.h"

class AGGCharacter;
class AGGPhysicsActor_Base;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPickedUpDelegate, AGGPhysicsActor_Base*, PickedUpActor, AGGCharacter*, CarringActor);

