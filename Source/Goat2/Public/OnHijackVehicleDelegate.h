#pragma once
#include "CoreMinimal.h"
#include "OnHijackVehicleDelegate.generated.h"

class AGGCharacter;
class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHijackVehicle, AGGCharacter*, CharacterHijacking, AGGVehicle*, HijackedVehicle);

