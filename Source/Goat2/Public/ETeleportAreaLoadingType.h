#pragma once
#include "CoreMinimal.h"
#include "ETeleportAreaLoadingType.generated.h"

UENUM(BlueprintType)
enum class ETeleportAreaLoadingType : uint8 {
    TALT_InPersistentLevel,
    TALT_InstancedLevel,
};

