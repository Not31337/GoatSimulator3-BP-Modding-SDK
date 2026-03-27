#pragma once
#include "CoreMinimal.h"
#include "EGameVersion.generated.h"

UENUM(BlueprintType)
enum class EGameVersion : uint8 {
    Main,
    Experimental,
    Other,
};

