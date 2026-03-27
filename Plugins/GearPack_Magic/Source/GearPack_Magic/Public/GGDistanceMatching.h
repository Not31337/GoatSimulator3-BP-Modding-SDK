#pragma once
#include "CoreMinimal.h"
#include "GGDistanceMatching.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct GEARPACK_MAGIC_API FGGDistanceMatching {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    FGGDistanceMatching();
};

