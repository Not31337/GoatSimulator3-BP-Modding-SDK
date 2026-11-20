#pragma once
#include "CoreMinimal.h"
#include "LevelSaveDeleteRequestedDelegate.generated.h"

class UGGLevelSelectSaveUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelSaveDeleteRequested, UGGLevelSelectSaveUserWidget*, LevelSelectSaveWidget);

