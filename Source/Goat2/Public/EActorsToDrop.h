#pragma once
#include "CoreMinimal.h"
#include "EActorsToDrop.generated.h"

UENUM(BlueprintType)
enum class EActorsToDrop : uint8 {
    ATD_None,
    ATD_RightHand,
    ATD_LeftHand,
    ATD_BothtHands,
    ATD_AllPActors,
    ATD_AllActors,
};

