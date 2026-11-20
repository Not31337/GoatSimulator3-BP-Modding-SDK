#pragma once
#include "CoreMinimal.h"
#include "GGRideSeatPassengerChanged_DelegateDelegate.generated.h"

class AGGRideSeat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGRideSeatPassengerChanged_Delegate, AGGRideSeat*, Seat, bool, bHasPassenger);

