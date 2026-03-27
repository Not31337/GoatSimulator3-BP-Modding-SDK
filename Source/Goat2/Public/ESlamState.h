#pragma once
#include "CoreMinimal.h"
#include "ESlamState.generated.h"

UENUM(BlueprintType)
enum ESlamState {
    SS_TravelTo,
    SS_Hover,
    SS_Slam,
};

