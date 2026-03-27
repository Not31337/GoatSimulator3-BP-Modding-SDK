#pragma once
#include "CoreMinimal.h"
#include "OnFriendsMenuNavigationPreparationCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnFriendsMenuNavigationPreparationComplete, bool, bWasSuccess);

