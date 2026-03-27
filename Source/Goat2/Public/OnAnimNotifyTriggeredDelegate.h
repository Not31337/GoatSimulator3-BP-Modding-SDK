#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimTypes.h"
#include "OnAnimNotifyTriggeredDelegate.generated.h"

class AGGCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAnimNotifyTriggered, AGGCharacter*, Character, const FAnimNotifyEvent&, AnimNotifyEvent);

