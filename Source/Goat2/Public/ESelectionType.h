#pragma once
#include "CoreMinimal.h"
#include "ESelectionType.generated.h"

UENUM(BlueprintType)
enum class ESelectionType : uint8 {
    ST_Vertex,
    ST_Trianles,
};

