#pragma once
#include "CoreMinimal.h"
#include "OnFinishedLoadingResourcesDelegate.generated.h"

class AGGPhysicsActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinishedLoadingResources, AGGPhysicsActor*, PActor);

