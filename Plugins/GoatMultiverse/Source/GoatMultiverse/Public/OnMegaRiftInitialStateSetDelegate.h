#pragma once
#include "CoreMinimal.h"
#include "EMegaRiftState.h"
#include "EMegaRifts.h"
#include "OnMegaRiftInitialStateSetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMegaRiftInitialStateSet, EMegaRifts, MegaRift, EMegaRiftState, InitialState);

