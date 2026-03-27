#pragma once
#include "CoreMinimal.h"
#include "ECanStartSplitScreenResult.generated.h"

UENUM(BlueprintType)
enum class ECanStartSplitScreenResult : uint8 {
    Yes,
    No,
    NeedToEndSession,
};

