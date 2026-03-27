#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "InputCoreTypes.h"
#include "OnKeyInputDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnKeyInput, int32, ControllerId, FKey, Key, TEnumAsByte<EInputEvent>, EventType, bool, bGamepad);

