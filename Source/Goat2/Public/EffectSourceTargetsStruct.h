#pragma once
#include "CoreMinimal.h"
#include "EffectSourceTargetsPair.h"
#include "EffectSourceTargetsStruct.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FEffectSourceTargetsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectSourceTargetsPair> Sources;
    
    FEffectSourceTargetsStruct();
};

