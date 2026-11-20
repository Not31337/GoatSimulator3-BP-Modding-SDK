#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETextOperator.h"
#include "ETextProperty.h"
#include "GameNightPromptOverrideRow.generated.h"

USTRUCT(BlueprintType)
struct FGameNightPromptOverrideRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextProperty Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContextOverride;
    
    GOAT2_API FGameNightPromptOverrideRow();
};

