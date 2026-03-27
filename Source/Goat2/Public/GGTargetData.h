#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GGTargetData.generated.h"

USTRUCT(BlueprintType)
struct FGGTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    GOAT2_API FGGTargetData();
};

