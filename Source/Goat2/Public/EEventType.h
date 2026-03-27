#pragma once
#include "CoreMinimal.h"
#include "EEventType.generated.h"

UENUM(BlueprintType)
enum class EEventType : uint8 {
    ET_EditorPlaced,
    ET_Dynamic,
};

