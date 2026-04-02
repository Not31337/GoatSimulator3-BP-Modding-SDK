#pragma once
#include "CoreMinimal.h"
#include "EPlatformFlags.generated.h"

UENUM()
enum class EPlatformFlags : uint16 {
    None,
    PC,
    XSX,
    PS5 = 4,
    Android = 8,
    IOS = 16,
    Switch = 32,
    WinGDK = 64,
    PS4 = 128,
    XboxOne = 256,
    Steam = 512,
    Sage = 1024,
    Luna = 2048,
};

