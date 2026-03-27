#pragma once
#include "CoreMinimal.h"
#include "EGoatDLCRestriction.generated.h"

UENUM(BlueprintType)
enum class EGoatDLCRestriction : uint8 {
    None,
    NotOwningInsideLevel,
    OwningAnywhere,
    OwningInsideLevel,
};

