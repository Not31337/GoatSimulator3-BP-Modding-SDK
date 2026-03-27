#pragma once
#include "CoreMinimal.h"
#include "GGOnCubeCountChanged_DelegateDelegate.generated.h"

class AGGPhysicsActor_CompactedCube;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGOnCubeCountChanged_Delegate, AGGPhysicsActor_CompactedCube*, Cube);

