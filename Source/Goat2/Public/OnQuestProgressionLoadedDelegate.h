#pragma once
#include "CoreMinimal.h"
#include "OnQuestProgressionLoadedDelegate.generated.h"

class AGGQuestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestProgressionLoaded, AGGQuestBase*, Quest);

