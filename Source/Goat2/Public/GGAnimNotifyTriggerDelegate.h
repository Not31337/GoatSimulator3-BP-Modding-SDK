#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGAnimNotifyTriggerDelegate.generated.h"

class AGGCharacter;
class UGGAnimNotify;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGGAnimNotifyTrigger, AGGCharacter*, Character, const UGGAnimNotify*, AnimNotify, FGameplayTag, NotifyTag);

