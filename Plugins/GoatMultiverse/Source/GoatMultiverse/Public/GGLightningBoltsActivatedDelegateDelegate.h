#pragma once
#include "CoreMinimal.h"
#include "GGLightningBoltsActivatedDelegateDelegate.generated.h"

class AGGExplosiveActor;
class UGGGearAbility_LightningBolts;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGLightningBoltsActivatedDelegate, const UGGGearAbility_LightningBolts*, Ability, AGGExplosiveActor*, Explosive);

