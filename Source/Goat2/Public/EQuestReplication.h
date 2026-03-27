#pragma once
#include "CoreMinimal.h"
#include "EQuestReplication.generated.h"

UENUM(BlueprintType)
enum class EQuestReplication : uint8 {
    Local,
    Shared,
};

