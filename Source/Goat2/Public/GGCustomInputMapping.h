#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Framework/Commands/InputChord.h"
#include "GGCustomInputMapping.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGCustomInputMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputMappingName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord InputChord;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag KeyGroup;
    
    FGGCustomInputMapping();
};

