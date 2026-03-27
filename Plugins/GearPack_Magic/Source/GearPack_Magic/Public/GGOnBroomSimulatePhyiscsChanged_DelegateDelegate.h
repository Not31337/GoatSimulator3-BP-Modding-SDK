#pragma once
#include "CoreMinimal.h"
#include "GGOnBroomSimulatePhyiscsChanged_DelegateDelegate.generated.h"

class AGGFlyingBroom;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGOnBroomSimulatePhyiscsChanged_Delegate, AGGFlyingBroom*, Broom);

