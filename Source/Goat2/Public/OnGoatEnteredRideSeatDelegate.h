#pragma once
#include "CoreMinimal.h"
#include "OnGoatEnteredRideSeatDelegate.generated.h"

class AActor;
class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoatEnteredRideSeat, AGGGoat*, Goat, AActor*, RideSeat);

