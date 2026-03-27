#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectTypes.h"
#include "OnActorGotNewStatusEffectDelegate.generated.h"

class AActor;
class AGGStatusEffectBase;
class UGGStatusEffectManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnActorGotNewStatusEffect, AActor*, Actor, UGGStatusEffectManager*, Manager, AGGStatusEffectBase*, NewStatusEffect, EStatusEffectTypes, Type);

