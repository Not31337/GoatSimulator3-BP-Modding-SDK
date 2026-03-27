#pragma once
#include "CoreMinimal.h"
#include "SavedGearData.h"
#include "SavedGearPreset.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FSavedGearPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedGearData> GearData;
    
    FSavedGearPreset();
};

