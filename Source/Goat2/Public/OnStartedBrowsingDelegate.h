#pragma once
#include "CoreMinimal.h"
#include "OnStartedBrowsingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartedBrowsing, const FText, BrowsingText);

