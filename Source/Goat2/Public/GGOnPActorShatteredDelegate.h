#pragma once
#include "CoreMinimal.h"
#include "GGOnPActorShatteredDelegate.generated.h"

class AGGPhysicsActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGOnPActorShattered, AGGPhysicsActor*, PActor);

