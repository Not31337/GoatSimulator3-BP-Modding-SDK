#pragma once
#include "CoreMinimal.h"
#include "GGBeeSwarmReturnedToOwner_DelegateDelegate.generated.h"

class AGGBeeHive_Swarm;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGBeeSwarmReturnedToOwner_Delegate, AGGBeeHive_Swarm*, BeeSwarm);

