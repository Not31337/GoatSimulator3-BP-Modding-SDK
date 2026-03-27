#pragma once
#include "CoreMinimal.h"
#include "ECrowdTypes.generated.h"

UENUM(BlueprintType)
enum class ECrowdTypes : uint8 {
    CT_None,
    CT_SingleNPCs,
    CT_NPCGroups,
    CT_NPCQueues,
    CT_NPCQueuesFirst,
};

