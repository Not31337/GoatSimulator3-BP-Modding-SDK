#pragma once
#include "CoreMinimal.h"
#include "SavedGearData.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FSavedGearData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GearID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGiveAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StyleID;
    
    FSavedGearData();
};

