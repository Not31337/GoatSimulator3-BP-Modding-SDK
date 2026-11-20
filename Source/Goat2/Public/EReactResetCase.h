#pragma once
#include "CoreMinimal.h"
#include "EReactResetCase.generated.h"

UENUM(BlueprintType)
enum class EReactResetCase : uint8 {
    RRC_None,
    RRC_Ragdoll,
    RRC_Panic,
    RRC_Stumble,
    RRC_Damage,
    RRC_NewReact,
};

