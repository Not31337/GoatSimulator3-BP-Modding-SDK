#pragma once
#include "CoreMinimal.h"
#include "OnQuestListItemSelectionDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestListItemSelection, UObject*, Object, bool, bIsSelected);

