#pragma once
#include "CoreMinimal.h"
#include "ECheatNativeParameterType.generated.h"

UENUM(BlueprintType)
enum class ECheatNativeParameterType : uint8 {
    CNP_Void,
    CNP_Float,
    CNP_Int,
    CNP_Boolean,
    CNP_String,
};

