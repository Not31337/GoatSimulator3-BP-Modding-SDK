#pragma once
#include "CoreMinimal.h"
#include "OnCharacterExitedVehicleDelegate.generated.h"

class AGGCharacter;
class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterExitedVehicle, AGGCharacter*, Character, AGGVehicle*, Vehicle);

