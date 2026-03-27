#pragma once
#include "CoreMinimal.h"
#include "OnQuestListItemClickedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestListItemClicked, UObject*, Object);

