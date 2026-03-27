#pragma once
#include "CoreMinimal.h"
#include "EAreaSlotState.generated.h"

UENUM(BlueprintType)
enum class EAreaSlotState : uint8 {
    ASS_Empty,
    ASS_Loading,
    ASS_Active,
    ASS_Unloading,
};

