#pragma once
#include "CoreMinimal.h"
#include "GGStumblingCharacter.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct GOAT2_API FGGStumblingCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Character;
    
    FGGStumblingCharacter();
};

