#pragma once
#include "CoreMinimal.h"
#include "EColorRequestMode.generated.h"

UENUM(BlueprintType)
namespace EColorRequestMode {
    enum Type {
        NotLoaded,
        GotRandom,
        GotLast,
        GotFavorite,
        NoSaveFile,
    };
}

