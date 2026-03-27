#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGBaaGearSettingsDataAsset.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGBaaGearSettingsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysRevertBaaOnAGChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRevertBaaOnAGChangeIfDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDefaultBaaAsEmptySlotOverview;
    
    UGGBaaGearSettingsDataAsset();

};

