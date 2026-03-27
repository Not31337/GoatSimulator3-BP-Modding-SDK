#pragma once
#include "CoreMinimal.h"
#include "ESaveFileTypes.generated.h"

UENUM(BlueprintType)
enum class ESaveFileTypes : uint8 {
    SFT_Goat,
    SFT_World,
    SFT_WorldCollection,
};

