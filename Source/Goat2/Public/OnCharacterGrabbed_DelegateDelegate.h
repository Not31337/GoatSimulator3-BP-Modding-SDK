#pragma once
#include "CoreMinimal.h"
#include "OnCharacterGrabbed_DelegateDelegate.generated.h"

class AGGCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterGrabbed_Delegate, AGGCharacter*, Grabber, AGGCharacter*, GrabbedCharacter);

