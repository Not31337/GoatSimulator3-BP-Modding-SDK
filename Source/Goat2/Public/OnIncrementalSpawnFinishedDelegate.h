#pragma once
#include "CoreMinimal.h"
#include "OnIncrementalSpawnFinishedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIncrementalSpawnFinished, AActor*, Actor);

