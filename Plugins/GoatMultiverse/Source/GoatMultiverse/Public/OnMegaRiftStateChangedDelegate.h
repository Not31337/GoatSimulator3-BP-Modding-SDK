#pragma once
#include "CoreMinimal.h"
#include "EMegaRiftState.h"
#include "EMegaRifts.h"
#include "OnMegaRiftStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMegaRiftStateChanged, EMegaRifts, MegaRift, EMegaRiftState, NewState);

