#pragma once
#include "CoreMinimal.h"
#include "EAttackHandState.generated.h"

UENUM(BlueprintType)
enum EAttackHandState {
    AHS_Idle,
    AHS_TravelOutwards,
    AHS_Slam,
};

