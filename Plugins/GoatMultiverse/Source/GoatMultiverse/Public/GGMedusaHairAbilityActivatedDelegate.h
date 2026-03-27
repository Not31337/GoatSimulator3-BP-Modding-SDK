#pragma once
#include "CoreMinimal.h"
#include "GGMedusaHairAbilityActivatedDelegate.generated.h"

class AGGGoat;
class UGGFreezeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGMedusaHairAbilityActivated, AGGGoat*, Goat, const TArray<UGGFreezeComponent*>&, FrozenActors);

