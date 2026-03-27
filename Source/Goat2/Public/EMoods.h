#pragma once
#include "CoreMinimal.h"
#include "EMoods.generated.h"

UENUM(BlueprintType)
enum class EMoods : uint8 {
    M_None,
    M_Carefree,
    M_Agitated,
    M_Happy,
    M_Sad,
    M_Scared,
    M_Angry,
    M_Loving,
};

