#pragma once
#include "CoreMinimal.h"
#include "EGGCompanionState.h"
#include "GGOnCampanionChangedState_DelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGOnCampanionChangedState_Delegate, EGGCompanionState, OldState);

