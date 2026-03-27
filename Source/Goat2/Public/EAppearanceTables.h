#pragma once
#include "CoreMinimal.h"
#include "EAppearanceTables.generated.h"

UENUM(BlueprintType)
enum class EAppearanceTables : uint8 {
    AT_HeadTable,
    AT_HairTable,
    AT_UpperBodyTable,
    AT_LowerBodyTable,
    AT_AccessoryTable,
};

