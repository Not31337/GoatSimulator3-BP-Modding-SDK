#pragma once
#include "CoreMinimal.h"
#include "OnQuestRemoteCompletionDelegate.generated.h"

class AGGQuestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestRemoteCompletion, AGGQuestBase*, Quest);

