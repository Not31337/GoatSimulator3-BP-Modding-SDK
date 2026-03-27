#pragma once
#include "CoreMinimal.h"
#include "EClassRepNodeMapping.generated.h"

UENUM(BlueprintType)
enum class EClassRepNodeMapping : uint8 {
    NotRouted,
    RelevantAllConnections,
    FrequencyBuckets,
    Spatialize_Frequency,
    SpatializeGrid_Static,
    SpatializeGrid_Dynamic,
    SpatializeGrid_Dormancy,
};

