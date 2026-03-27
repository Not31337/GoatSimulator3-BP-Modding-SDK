#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "OnTakeDamageWithEventDelegate.generated.h"

class AActor;
class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnTakeDamageWithEvent, float, DamageAmount, FVector, Impulse, const FDamageEvent&, DamageEvent, AController*, EventInstigator, AActor*, DamageCauser);

