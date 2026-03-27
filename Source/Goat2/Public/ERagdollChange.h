#pragma once
#include "CoreMinimal.h"
#include "ERagdollChange.generated.h"

UENUM(BlueprintType)
enum class ERagdollChange : uint8 {
    None,
    ToRagdoll,
    UnRagdoll,
};

