#pragma once
#include "CoreMinimal.h"
#include "GGOnActorAddedToVehicleInventory_DelegateDelegate.generated.h"

class AActor;
class UGGVehicleInventory;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGOnActorAddedToVehicleInventory_Delegate, UGGVehicleInventory*, Inventory, AActor*, AddedActor);

