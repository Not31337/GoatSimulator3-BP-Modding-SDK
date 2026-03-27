#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnLocalGearEquipDelegate.generated.h"

class AGGGoat;
class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLocalGearEquip, AGGGoat*, Goat, const TArray<TSubclassOf<USceneComponent>>&, GearEquipped);

