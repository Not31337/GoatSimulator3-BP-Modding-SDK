#pragma once
#include "CoreMinimal.h"
#include "ETextProperty.generated.h"

UENUM(BlueprintType)
enum class ETextProperty : uint8 {
    Namespace,
    Key,
    SourceString,
};

