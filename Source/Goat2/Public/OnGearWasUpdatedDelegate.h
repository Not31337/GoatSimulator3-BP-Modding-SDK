#pragma once
#include "CoreMinimal.h"
#include "OnGearWasUpdatedDelegate.generated.h"

class AGGGoat;
class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGearWasUpdated, AGGGoat*, Goat, const TArray<USceneComponent*>&, CurrentGoatGear);

