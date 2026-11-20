#pragma once
#include "CoreMinimal.h"
#include "OnBalloonDelegateDelegate.generated.h"

class AGGPhysicsActor_BalloonHolder;
class AGGPhysicsActor_HeldBalloon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBalloonDelegate, AGGPhysicsActor_BalloonHolder*, BalloonHolder, AGGPhysicsActor_HeldBalloon*, BalloonPActor);

