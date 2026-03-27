#pragma once
#include "CoreMinimal.h"
#include "OnReachedPathTargetActorDelegate.generated.h"

class AActor;
class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReachedPathTargetActor, AGGVehicle*, Vehicle, AActor*, Actor);

