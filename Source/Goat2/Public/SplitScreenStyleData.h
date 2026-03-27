#pragma once
#include "CoreMinimal.h"
#include "SplitScreenStyleData.generated.h"

class UGGGoatGearStyleDataAsset;

USTRUCT(BlueprintType)
struct FSplitScreenStyleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearStyleDataAsset* CurrentStyleData;
    
    GOAT2_API FSplitScreenStyleData();
};

