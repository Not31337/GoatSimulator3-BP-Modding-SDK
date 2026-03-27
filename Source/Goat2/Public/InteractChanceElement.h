#pragma once
#include "CoreMinimal.h"
#include "EInteractChances.h"
#include "InteractChanceElement.generated.h"

USTRUCT(BlueprintType)
struct FInteractChanceElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractChances InteractChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chance;
    
    GOAT2_API FInteractChanceElement();
};

