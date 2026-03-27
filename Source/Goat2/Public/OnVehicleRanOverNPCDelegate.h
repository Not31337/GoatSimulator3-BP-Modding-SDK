#pragma once
#include "CoreMinimal.h"
#include "OnVehicleRanOverNPCDelegate.generated.h"

class AGGNPC;
class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVehicleRanOverNPC, AGGVehicle*, Vehicle, AGGNPC*, NPC);

