#pragma once
#include "CoreMinimal.h"
#include "ETowerPuzzleState.generated.h"

UENUM(BlueprintType)
enum class ETowerPuzzleState : uint8 {
    None,
    Completed_Savefile,
    Completed_Runtime,
};

