#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGVoiceLineLinkDataAsset.generated.h"

class USoundWave;

UCLASS(Blueprintable)
class GOAT2_API UGGVoiceLineLinkDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundWave> LinkedSoundWave;
    
    UGGVoiceLineLinkDataAsset();

};

