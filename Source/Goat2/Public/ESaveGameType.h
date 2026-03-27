#pragma once
#include "CoreMinimal.h"
#include "ESaveGameType.generated.h"

UENUM(BlueprintType)
enum class ESaveGameType : uint8 {
    Player,
    World,
};

