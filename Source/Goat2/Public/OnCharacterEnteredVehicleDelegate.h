#pragma once
#include "CoreMinimal.h"
#include "OnCharacterEnteredVehicleDelegate.generated.h"

class AGGCharacter;
class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCharacterEnteredVehicle, AGGVehicle*, Vehicle, AGGCharacter*, Character, bool, bIsDriver);

