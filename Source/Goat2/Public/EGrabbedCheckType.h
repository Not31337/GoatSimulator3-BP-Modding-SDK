#pragma once
#include "CoreMinimal.h"
#include "EGrabbedCheckType.generated.h"

UENUM(BlueprintType)
enum class EGrabbedCheckType : uint8 {
    GCT_Anything,
    GCT_Goat,
    GCT_NPC,
    GCT_Self,
};

