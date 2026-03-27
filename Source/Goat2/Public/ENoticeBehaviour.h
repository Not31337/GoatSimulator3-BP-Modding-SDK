#pragma once
#include "CoreMinimal.h"
#include "ENoticeBehaviour.generated.h"

UENUM(BlueprintType)
enum class ENoticeBehaviour : uint8 {
    InViewOnly,
    InViewAndSurrounding,
    Everywhere,
};

