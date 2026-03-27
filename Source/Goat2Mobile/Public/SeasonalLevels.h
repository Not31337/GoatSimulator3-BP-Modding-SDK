#pragma once
#include "CoreMinimal.h"
#include "SeasonalLevels.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct GOAT2MOBILE_API FSeasonalLevels {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> Levels;
    
    FSeasonalLevels();
};

