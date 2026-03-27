#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGAnimNotifyTriggerDelegateDelegate.generated.h"

class AGGCharacter;
class UGGAnimNotify;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FGGAnimNotifyTriggerDelegate, AGGCharacter*, Character, const UGGAnimNotify*, AnimNotify, FGameplayTag, NotifyTag);

