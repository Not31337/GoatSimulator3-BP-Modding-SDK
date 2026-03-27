#pragma once
#include "CoreMinimal.h"
#include "GGChangedInputActionMapping.h"
#include "GGChangedInputAxisMapping.h"
#include "GGPlayerInputMappings.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGPlayerInputMappings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGChangedInputAxisMapping> InputAxisMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGChangedInputActionMapping> InputActionMappings;
    
    FGGPlayerInputMappings();
};

