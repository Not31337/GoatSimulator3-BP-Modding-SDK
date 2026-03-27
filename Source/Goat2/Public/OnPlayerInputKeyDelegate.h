#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "OnPlayerInputKeyDelegate.generated.h"

class AGGPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayerInputKey, AGGPlayerController*, Player, const FString&, InputMappingName, TEnumAsByte<EInputEvent>, EventType);

