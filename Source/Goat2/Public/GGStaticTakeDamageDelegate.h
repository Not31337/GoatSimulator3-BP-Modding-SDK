#pragma once
#include "CoreMinimal.h"
#include "GGStaticTakeDamageDelegate.generated.h"

class AActor;
class UGGStaticMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGGStaticTakeDamage, UGGStaticMeshComponent*, GGMeshComponent, float, Damage, AActor*, DamageCauser);

