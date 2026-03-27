#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "GGChangedInputAxisMapping.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGChangedInputAxisMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DefaultKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputAxisKeyMapping NewMapping;
    
    FGGChangedInputAxisMapping();
};

