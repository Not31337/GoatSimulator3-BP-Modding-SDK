#pragma once
#include "CoreMinimal.h"
#include "OnQuestListRebuiltDelegate.generated.h"

class UGGQuestListUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestListRebuilt, UGGQuestListUserWidget*, QuestList);

