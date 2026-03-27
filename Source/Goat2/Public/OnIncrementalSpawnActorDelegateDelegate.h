#pragma once
#include "CoreMinimal.h"
#include "OnIncrementalSpawnActorDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnIncrementalSpawnActorDelegate, AActor*, Actor);

