#pragma once
#include "CoreMinimal.h"
#include "OnCharacterEnteringVehicleDelegate.generated.h"

class AGGCharacter;
class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterEnteringVehicle, AGGCharacter*, Character, AGGVehicle*, Vehicle);

