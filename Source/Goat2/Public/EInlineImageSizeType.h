#pragma once
#include "CoreMinimal.h"
#include "EInlineImageSizeType.generated.h"

UENUM(BlueprintType)
enum class EInlineImageSizeType : uint8 {
    FitLineHeight,
    TextSize,
};

