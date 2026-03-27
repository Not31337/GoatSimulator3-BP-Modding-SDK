#pragma once
#include "CoreMinimal.h"
#include "MatElement.h"
#include "OnMaterialSetDelegate.generated.h"

class AGGPhysicsActor_Base;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMaterialSet, AGGPhysicsActor_Base*, PhysActor, const TArray<FMatElement>&, NewMaterials);

