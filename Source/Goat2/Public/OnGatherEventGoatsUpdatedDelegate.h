#pragma once
#include "CoreMinimal.h"
#include "OnGatherEventGoatsUpdatedDelegate.generated.h"

class AGGPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGatherEventGoatsUpdated, const FString&, GatherID, const TArray<AGGPlayerState*>&, Players);

