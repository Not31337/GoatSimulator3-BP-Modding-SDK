#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGGearbox.h"
#include "GGVehicleGearboxConfig.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGVehicleGearboxConfig : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGearbox Gearbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundGearUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundGearDown;
    
    UGGVehicleGearboxConfig();

};

