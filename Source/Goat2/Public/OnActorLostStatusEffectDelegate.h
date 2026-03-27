#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectTypes.h"
#include "OnActorLostStatusEffectDelegate.generated.h"

class AActor;
class UGGStatusEffectManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActorLostStatusEffect, AActor*, Actor, UGGStatusEffectManager*, Manager, EStatusEffectTypes, Type);

