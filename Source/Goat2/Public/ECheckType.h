#pragma once
#include "CoreMinimal.h"
#include "ECheckType.generated.h"

UENUM(BlueprintType)
enum class ECheckType : uint8 {
    CT_Equals,
    CT_More,
    CT_MoreOrEqual,
    CT_Less,
    CT_LessOrEqual,
};

