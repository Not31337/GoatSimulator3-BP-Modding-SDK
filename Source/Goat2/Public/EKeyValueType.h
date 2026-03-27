#pragma once
#include "CoreMinimal.h"
#include "EKeyValueType.generated.h"

UENUM(BlueprintType)
enum class EKeyValueType : uint8 {
    None,
    Bool,
    Int,
    Float,
    String,
};

