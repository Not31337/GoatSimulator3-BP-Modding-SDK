#pragma once
#include "CoreMinimal.h"
#include "OnResourcesLoadedOutputPinDelegate.generated.h"

class AGGPhysicsActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResourcesLoadedOutputPin, AGGPhysicsActor*, PhysicsActor);

