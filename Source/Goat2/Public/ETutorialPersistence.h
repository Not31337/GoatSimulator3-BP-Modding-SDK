#pragma once
#include "CoreMinimal.h"
#include "ETutorialPersistence.generated.h"

UENUM(BlueprintType)
namespace ETutorialPersistence {
    enum Type {
        OncePerSave,
        OncePerSession,
        Always,
        CountPerSave,
        Custom,
    };
}

