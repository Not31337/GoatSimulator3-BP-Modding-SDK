#pragma once
#include "CoreMinimal.h"
#include "EGearEquipContext.h"
#include "Templates/SubclassOf.h"
#include "OnLocalGearEquipWithContextDelegate.generated.h"

class AGGGoat;
class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLocalGearEquipWithContext, AGGGoat*, Goat, const TArray<TSubclassOf<USceneComponent>>&, GearEquipped, EGearEquipContext, EquipContext);

