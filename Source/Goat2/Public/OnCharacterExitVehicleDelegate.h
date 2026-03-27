#pragma once
#include "CoreMinimal.h"
#include "OnCharacterExitVehicleDelegate.generated.h"

class AGGCharacter;
class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCharacterExitVehicle, AGGVehicle*, Vehicle, AGGCharacter*, Character, bool, bWasDriver);

