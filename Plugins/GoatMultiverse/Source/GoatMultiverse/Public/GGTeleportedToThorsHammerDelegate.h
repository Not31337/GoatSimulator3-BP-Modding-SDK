#pragma once
#include "CoreMinimal.h"
#include "GGTeleportedToThorsHammerDelegate.generated.h"

class AGGGoat;
class AGGThorsHammerProjectile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGTeleportedToThorsHammer, AGGGoat*, Goat, AGGThorsHammerProjectile*, Hammer);

