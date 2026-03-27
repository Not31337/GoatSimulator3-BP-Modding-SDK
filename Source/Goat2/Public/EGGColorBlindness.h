#pragma once
#include "CoreMinimal.h"
#include "EGGColorBlindness.generated.h"

UENUM(BlueprintType)
namespace EGGColorBlindness {
    enum Type {
        Off,
        Deuteranopia,
        Tritanopia,
        Protanopia,
    };
}

