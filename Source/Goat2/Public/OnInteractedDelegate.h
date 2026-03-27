#pragma once
#include "CoreMinimal.h"
#include "OnInteractedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteracted, AActor*, SourceActor, AActor*, TargetActor);

