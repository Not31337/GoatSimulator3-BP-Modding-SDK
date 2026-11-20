#pragma once
#include "CoreMinimal.h"
#include "GGRideSeat_DelegateDelegate.generated.h"

class AGGRideSeat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGRideSeat_Delegate, AGGRideSeat*, Seat);

