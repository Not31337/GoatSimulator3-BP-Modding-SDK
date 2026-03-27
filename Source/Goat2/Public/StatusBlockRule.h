#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectTypes.h"
#include "StatusBlockRule.generated.h"

USTRUCT(BlueprintType)
struct FStatusBlockRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusEffectTypes Status1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusEffectTypes Status2;
    
    GOAT2_API FStatusBlockRule();
};

