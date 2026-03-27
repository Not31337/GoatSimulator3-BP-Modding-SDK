#pragma once
#include "CoreMinimal.h"
#include "EGoatLickCheckType.generated.h"

UENUM(BlueprintType)
enum class EGoatLickCheckType : uint8 {
    GLCT_Default,
    GLCT_IsLickingActor,
    GLCT_IdentifierTags,
    GLCT_DangerousPActor,
};

