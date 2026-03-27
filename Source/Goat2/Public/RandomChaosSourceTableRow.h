#pragma once
#include "CoreMinimal.h"
#include "ChaosSourceTableRow.h"
#include "RandomChaosSourceTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRandomChaosSourceTableRow : public FChaosSourceTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinChaosAward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChaosAward;
    
    GOAT2_API FRandomChaosSourceTableRow();
};

