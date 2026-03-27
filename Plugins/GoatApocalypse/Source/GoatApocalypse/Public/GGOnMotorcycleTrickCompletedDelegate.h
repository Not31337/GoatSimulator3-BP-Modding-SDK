#pragma once
#include "CoreMinimal.h"
#include "GGOnMotorcycleTrickCompletedDelegate.generated.h"

class AGGVehicle_Motorcycle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGOnMotorcycleTrickCompleted, AGGVehicle_Motorcycle*, Motorcycle, const FString&, TrickName);

