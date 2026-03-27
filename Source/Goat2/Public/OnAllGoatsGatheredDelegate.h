#pragma once
#include "CoreMinimal.h"
#include "OnAllGoatsGatheredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAllGoatsGathered, const FString&, GatherID);

