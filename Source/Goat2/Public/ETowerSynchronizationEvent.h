#pragma once
#include "CoreMinimal.h"
#include "ETowerSynchronizationEvent.generated.h"

UENUM(BlueprintType)
enum class ETowerSynchronizationEvent : uint8 {
    LoadedFromSave,
    Synchronised,
    PostCutscene,
};

