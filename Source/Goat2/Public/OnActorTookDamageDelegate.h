#pragma once
#include "CoreMinimal.h"
#include "OnActorTookDamageDelegate.generated.h"

class AActor;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnActorTookDamage, AActor*, SourceActor, AActor*, TargetActor, float, DamageAmount, const UDamageType*, DamageType);

