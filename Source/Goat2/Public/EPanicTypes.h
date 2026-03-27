#pragma once
#include "CoreMinimal.h"
#include "EPanicTypes.generated.h"

UENUM(BlueprintType)
enum class EPanicTypes : uint8 {
    PT_None,
    PT_Random,
    PT_RunAway,
    PT_RunAwayAndHide,
    PT_InPlace,
    PT_OnFire,
    PT_OnFireInPlace,
    PT_RunFromActor,
};

