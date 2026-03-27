#pragma once
#include "CoreMinimal.h"
#include "PreviewQueueData.generated.h"

class UGGGoatGearInfoDataAsset;

USTRUCT(BlueprintType)
struct GOAT2_API FPreviewQueueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* DataAsset;
    
    FPreviewQueueData();
};

