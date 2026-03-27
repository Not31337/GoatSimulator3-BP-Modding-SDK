#pragma once
#include "CoreMinimal.h"
#include "GGOnPlayerRidingSandworm_DelegateDelegate.generated.h"

class AGGGoat;
class AGGSandWorm;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGGOnPlayerRidingSandworm_Delegate, AGGSandWorm*, Worm, AGGGoat*, Player, bool, bIsDriver);

