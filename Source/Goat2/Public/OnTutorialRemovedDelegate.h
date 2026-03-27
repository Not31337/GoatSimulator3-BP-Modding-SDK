#pragma once
#include "CoreMinimal.h"
#include "OnTutorialRemovedDelegate.generated.h"

class AGGTutorial;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTutorialRemoved, AGGTutorial*, Tutorial);

