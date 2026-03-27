#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EffectSourcesPair.generated.h"

USTRUCT(BlueprintType)
struct FEffectSourcesPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EffectTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SourceTag;
    
    GOAT2_API FEffectSourcesPair();
};

