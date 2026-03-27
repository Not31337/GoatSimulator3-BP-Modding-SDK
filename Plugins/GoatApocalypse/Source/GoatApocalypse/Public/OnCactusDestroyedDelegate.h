#pragma once
#include "CoreMinimal.h"
#include "OnCactusDestroyedDelegate.generated.h"

class AGGCactus;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCactusDestroyed, AGGCactus*, Cactus);

