#pragma once
#include "CoreMinimal.h"
#include "RideSeatAssignNpcDelegateDelegate.generated.h"

class AGGNPC_Humanoid;
class AGGRideSeat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRideSeatAssignNpcDelegate, AGGNPC_Humanoid*, NPC, AGGRideSeat*, Seat, bool, bHasReachedSeat);

