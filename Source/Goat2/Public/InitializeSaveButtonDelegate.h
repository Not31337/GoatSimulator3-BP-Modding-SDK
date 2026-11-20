#pragma once
#include "CoreMinimal.h"
#include "DLCLevelData.h"
#include "InitializeSaveButtonDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInitializeSaveButton, FDLCLevelData, InLevelData);

