#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGPIDConfig.h"
#include "GGPIDConfigDataAsset.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGPIDConfigDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGPIDConfig PID_Config;
    
    UGGPIDConfigDataAsset();

};

