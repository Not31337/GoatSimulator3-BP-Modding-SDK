#pragma once
#include "CoreMinimal.h"
#include "EPopupButtonLayout.generated.h"

UENUM(BlueprintType)
enum class EPopupButtonLayout : uint8 {
    OK,
    ConfirmCancel,
    YesNo,
};

