#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LoadingScreenHint.h"
#include "LoadingScreenHintRow.generated.h"

USTRUCT(BlueprintType)
struct FLoadingScreenHintRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoadingScreenHint> Hints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    GOAT2_API FLoadingScreenHintRow();
};

