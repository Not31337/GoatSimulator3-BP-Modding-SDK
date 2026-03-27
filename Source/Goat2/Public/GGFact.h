#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGFact.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGFact {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FGGFact();
};

