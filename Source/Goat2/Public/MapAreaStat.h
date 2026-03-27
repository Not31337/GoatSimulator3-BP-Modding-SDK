#pragma once
#include "CoreMinimal.h"
#include "MapAreaStat.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FMapAreaStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Total;
    
    FMapAreaStat();
};

