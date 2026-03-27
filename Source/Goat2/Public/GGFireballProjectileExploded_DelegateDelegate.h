#pragma once
#include "CoreMinimal.h"
#include "GGFireballProjectileExploded_DelegateDelegate.generated.h"

class AGGFireballProjectile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGFireballProjectileExploded_Delegate, AGGFireballProjectile*, Projectile);

