#pragma once
#include "CoreMinimal.h"
#include "ECarryItemType.generated.h"

UENUM(BlueprintType)
enum class ECarryItemType : uint8 {
    CIT_Normal,
    CIT_OneHand,
    CIT_TwoHands,
    CIT_Phone,
    CIT_Sign,
    CIT_FoodOrDrink,
};

