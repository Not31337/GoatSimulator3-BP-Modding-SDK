#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "GGChangedInputActionMapping.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGChangedInputActionMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputActionKeyMapping DefaultMapping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputActionKeyMapping NewMapping;
    
    FGGChangedInputActionMapping();
};

