#pragma once
#include "CoreMinimal.h"
#include "MenuLoadingData.generated.h"

class UGGMenuDataAsset;

USTRUCT(BlueprintType)
struct GOAT2_API FMenuLoadingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGMenuDataAsset* MenuData;
    
    FMenuLoadingData();
};

