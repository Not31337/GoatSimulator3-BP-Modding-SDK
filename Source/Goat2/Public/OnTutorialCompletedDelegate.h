#pragma once
#include "CoreMinimal.h"
#include "OnTutorialCompletedDelegate.generated.h"

class AGGTutorial;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTutorialCompleted, AGGTutorial*, Tutorial);

