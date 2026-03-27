#pragma once
#include "CoreMinimal.h"
#include "ECheatMenuEntryType.generated.h"

UENUM(BlueprintType)
enum ECheatMenuEntryType {
    CME_Teleport,
    CME_Sequence,
    CME_Button,
    CME_Native,
};

