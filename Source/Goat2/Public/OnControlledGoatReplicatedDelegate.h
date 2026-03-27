#pragma once
#include "CoreMinimal.h"
#include "OnControlledGoatReplicatedDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnControlledGoatReplicated, AGGGoat*, ControlledGoat);

