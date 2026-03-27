#pragma once
#include "CoreMinimal.h"
#include "EStallSpawned.generated.h"

UENUM(BlueprintType)
enum class EStallSpawned : uint8 {
    SS_NoAttempt,
    SS_Succeeded,
    SS_Failed,
};

