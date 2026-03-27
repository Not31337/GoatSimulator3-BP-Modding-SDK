#pragma once
#include "CoreMinimal.h"
#include "OnQuestInitializedDelegate.generated.h"

class AGGQuestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestInitialized, AGGQuestBase*, Quest);

