#pragma once
#include "CoreMinimal.h"
#include "ELineOfSightSetting.generated.h"

UENUM(BlueprintType)
enum class ELineOfSightSetting : uint8 {
    LoSS_None,
    LoSS_Infront,
    LoSS_Behind,
    LoSS_InfrontNotBlocked,
};

