#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DistanceData.h"
#include "DistanceDataSource.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FDistanceDataSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDistanceData> DistanceData;
    
    FDistanceDataSource();
};

