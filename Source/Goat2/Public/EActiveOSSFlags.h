#pragma once
#include "CoreMinimal.h"
#include "EActiveOSSFlags.generated.h"

UENUM(BlueprintType)
enum class EActiveOSSFlags : uint8 {
    None,
    EOS,
    Steam,
    GDK = 4,
    PS5 = 8,
    Switch = 16,
    PS4 = 32,
};

