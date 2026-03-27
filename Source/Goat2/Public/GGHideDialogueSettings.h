#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EGGEquation.h"
#include "GGHideDialogueSettings.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGHideDialogueSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactForHidingDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGEquation Equation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FactComparisonValue;
    
    FGGHideDialogueSettings();
};

