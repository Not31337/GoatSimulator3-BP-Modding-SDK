#pragma once
#include "CoreMinimal.h"
#include "EKrimsonHandState.generated.h"

UENUM(BlueprintType)
enum class EKrimsonHandState : uint8 {
    KHS_TravelOutwards,
    KHS_Slam,
};

