#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGRadioChannelPrimaryAsset.generated.h"

class USoundWave;

UCLASS(Blueprintable)
class GOAT2_API UGGRadioChannelPrimaryAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundWave*> Songs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundWave*> Intermission;
    
    UGGRadioChannelPrimaryAsset();

};

