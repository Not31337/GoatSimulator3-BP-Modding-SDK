#pragma once
#include "CoreMinimal.h"
#include "EPhysAnimProfiles.generated.h"

UENUM(BlueprintType)
enum class EPhysAnimProfiles : uint8 {
    PAP_None,
    PAP_GoatGeneral,
    PAP_GoatFloppyLegs,
    PAP_GoatNeck,
};

