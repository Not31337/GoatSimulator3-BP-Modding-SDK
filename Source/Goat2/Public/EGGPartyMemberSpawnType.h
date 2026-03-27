#pragma once
#include "CoreMinimal.h"
#include "EGGPartyMemberSpawnType.generated.h"

UENUM(BlueprintType)
enum class EGGPartyMemberSpawnType : uint8 {
    AtPoint,
    InAir,
};

