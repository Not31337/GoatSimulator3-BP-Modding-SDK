#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EGGEquation.h"
#include "GGDialogueLine.h"
#include "GGDialogueBranch.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGDialogueBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateBranchIfPreviousIsFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EntryCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyCheckIfFactExists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGEquation Equation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FactComparisonValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGDialogueLine> DialogueLines;
    
    FGGDialogueBranch();
};

