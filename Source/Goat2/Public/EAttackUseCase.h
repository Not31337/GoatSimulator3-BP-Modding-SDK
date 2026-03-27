#pragma once
#include "CoreMinimal.h"
#include "EAttackUseCase.generated.h"

UENUM(BlueprintType)
enum class EAttackUseCase : uint8 {
    AUS_Default,
    AUS_Character,
    AUS_NonCharacter,
    AUS_Player,
    AUS_NPC,
    AUS_AnimalNPC,
    AUS_HumanoidNPC,
    AUS_NoTarget,
};

