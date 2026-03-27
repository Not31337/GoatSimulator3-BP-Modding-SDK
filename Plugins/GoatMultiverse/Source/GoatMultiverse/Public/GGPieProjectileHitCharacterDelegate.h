#pragma once
#include "CoreMinimal.h"
#include "GGPieProjectileHitCharacterDelegate.generated.h"

class AGGCharacter;
class AGGPie_Projectile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGPieProjectileHitCharacter, AGGPie_Projectile*, Projectile, AGGCharacter*, Character);

