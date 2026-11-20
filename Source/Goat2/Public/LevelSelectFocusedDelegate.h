#pragma once
#include "CoreMinimal.h"
#include "LevelSelectFocusedDelegate.generated.h"

class UGGLevelSelectUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelSelectFocused, UGGLevelSelectUserWidget*, LevelSelectWidget);

