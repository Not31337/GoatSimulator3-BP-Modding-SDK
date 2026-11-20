#pragma once
#include "CoreMinimal.h"
#include "GGPlayerRideSeat_DelegateDelegate.generated.h"

class AGGGoat;
class AGGRideSeat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGPlayerRideSeat_Delegate, AGGGoat*, Player, AGGRideSeat*, Seat);

