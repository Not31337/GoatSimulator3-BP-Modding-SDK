#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGSimulatedEngine.h"
#include "GGSimulatedEngineConfig.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGSimulatedEngineConfig : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGSimulatedEngine Engine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundGearChange;
    
    UGGSimulatedEngineConfig();

};

