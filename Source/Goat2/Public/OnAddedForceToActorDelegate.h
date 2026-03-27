#pragma once
#include "CoreMinimal.h"
#include "OnAddedForceToActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddedForceToActor, AActor*, Actor);

