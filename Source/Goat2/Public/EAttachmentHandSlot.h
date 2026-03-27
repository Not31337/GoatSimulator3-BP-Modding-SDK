#pragma once
#include "CoreMinimal.h"
#include "EAttachmentHandSlot.generated.h"

UENUM(BlueprintType)
enum class EAttachmentHandSlot : uint8 {
    AHS_Right,
    AHS_Left,
    AHS_Both,
};

