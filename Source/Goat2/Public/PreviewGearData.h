#pragma once
#include "CoreMinimal.h"
#include "PreviewGearData.generated.h"

class UGGGoatGearInfoDataAsset;

USTRUCT(BlueprintType)
struct GOAT2_API FPreviewGearData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* DataAsset;
    
    FPreviewGearData();
};

