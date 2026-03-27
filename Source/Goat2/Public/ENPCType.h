#pragma once
#include "CoreMinimal.h"
#include "ENPCType.generated.h"

UENUM(BlueprintType)
enum class ENPCType : uint8 {
    NT_None,
    NT_Civilian,
    NT_Environmental,
    NT_Professional,
    NT_Special,
    NT_Animal,
};

