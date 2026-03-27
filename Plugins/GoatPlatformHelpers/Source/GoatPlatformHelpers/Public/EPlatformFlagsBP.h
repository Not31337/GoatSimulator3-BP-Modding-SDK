#pragma once
#include "CoreMinimal.h"
#include "EPlatformFlagsBP.generated.h"

UENUM(BlueprintType)
enum class EPlatformFlagsBP : uint8 {
    None,
    PC,
    XSX,
    PS5,
    Android,
    IOS,
    Switch,
    WinGDK,
    PS4,
    XboxOne,
    Steam,
};

