#pragma once
#include "CoreMinimal.h"
#include "OnTrickCompletedDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTrickCompleted, AGGGoat*, Goat, const FString&, TrickName);

