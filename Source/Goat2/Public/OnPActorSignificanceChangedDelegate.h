#pragma once
#include "CoreMinimal.h"
#include "OnPActorSignificanceChangedDelegate.generated.h"

class AGGPhysicsActor_Base;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPActorSignificanceChanged, AGGPhysicsActor_Base*, PActor, float, NewSignificance, float, OldSignificance);

