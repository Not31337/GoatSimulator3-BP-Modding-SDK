#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ChaosSpendSourceTableRow.generated.h"

USTRUCT(BlueprintType)
struct FChaosSpendSourceTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChaosCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceComment;
    
    GOAT2_API FChaosSpendSourceTableRow();
};

