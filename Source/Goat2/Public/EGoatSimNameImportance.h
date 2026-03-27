#pragma once
#include "CoreMinimal.h"
#include "EGoatSimNameImportance.generated.h"

UENUM(BlueprintType)
enum class EGoatSimNameImportance : uint8 {
    GSNI_NotImportant,
    GNSI_LittleImportant,
    GSNI_MediumImportant,
    GSNI_VeryImportant = 4,
    GSNI_CriticalImportant = 8,
};

