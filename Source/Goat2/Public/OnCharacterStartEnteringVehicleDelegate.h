#pragma once
#include "CoreMinimal.h"
#include "OnCharacterStartEnteringVehicleDelegate.generated.h"

class AGGCharacter;
class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterStartEnteringVehicle, AGGCharacter*, Character, AGGVehicle*, Vehicle);

