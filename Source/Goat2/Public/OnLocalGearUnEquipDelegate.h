#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnLocalGearUnEquipDelegate.generated.h"

class AGGGoat;
class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLocalGearUnEquip, AGGGoat*, Goat, const TArray<TSubclassOf<USceneComponent>>&, GearUnequipped);

