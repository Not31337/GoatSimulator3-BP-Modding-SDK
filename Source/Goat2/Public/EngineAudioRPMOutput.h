#pragma once
#include "CoreMinimal.h"
#include "EngineAudioRPMOutput.generated.h"

USTRUCT(BlueprintType)
struct FEngineAudioRPMOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAudioRPM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioRPM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLOAD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EngineLOAD;
    
    GOAT2_API FEngineAudioRPMOutput();
};

