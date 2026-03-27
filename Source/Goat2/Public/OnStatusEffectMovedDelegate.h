#pragma once
#include "CoreMinimal.h"
#include "OnStatusEffectMovedDelegate.generated.h"

class AActor;
class AGGStatusEffectBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnStatusEffectMoved, AGGStatusEffectBase*, StatusEffect, AActor*, OldActor, AActor*, NewActor);

