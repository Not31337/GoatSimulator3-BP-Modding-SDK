#pragma once
#include "CoreMinimal.h"
#include "LevelSelectExpandedDelegate.generated.h"

class UGGLevelSelectUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelSelectExpanded, UGGLevelSelectUserWidget*, LevelSelectWidget);

