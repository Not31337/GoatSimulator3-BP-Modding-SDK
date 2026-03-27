#pragma once
#include "CoreMinimal.h"
#include "GGOnActorRemovedFromVehicleInventory_DelegateDelegate.generated.h"

class AActor;
class UGGVehicleInventory;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGOnActorRemovedFromVehicleInventory_Delegate, UGGVehicleInventory*, Inventory, AActor*, RemovedActor);

