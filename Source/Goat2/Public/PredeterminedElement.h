#pragma once
#include "CoreMinimal.h"
#include "EAppearanceTables.h"
#include "PredeterminedElement.generated.h"

USTRUCT(BlueprintType)
struct FPredeterminedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppearanceTables DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    GOAT2_API FPredeterminedElement();
};

