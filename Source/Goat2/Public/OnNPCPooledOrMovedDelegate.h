#pragma once
#include "CoreMinimal.h"
#include "OnNPCPooledOrMovedDelegate.generated.h"

class AGGNPC;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNPCPooledOrMoved, AGGNPC*, NPC, bool, WasPooled);

