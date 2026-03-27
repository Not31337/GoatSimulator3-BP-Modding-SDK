#pragma once
#include "CoreMinimal.h"
#include "ERemovalReason.generated.h"

UENUM(BlueprintType)
enum class ERemovalReason : uint8 {
    RR_ManuallyCalled,
    RR_NewLoadingScreen,
    RR_NewTeleportLoadingScreen,
    RR_Finished,
};

