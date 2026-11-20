#pragma once
#include "CoreMinimal.h"
#include "LevelFocusedDelegate.generated.h"

class UGGButtonUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelFocused, UGGButtonUserWidget*, FocusedLevel);

