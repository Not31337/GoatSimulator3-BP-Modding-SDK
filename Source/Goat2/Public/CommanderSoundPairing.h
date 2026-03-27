#pragma once
#include "CoreMinimal.h"
#include "CommanderSoundPairing.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FCommanderSoundPairing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* NPCSelectVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* NPCMoveVoice;
    
    GOAT2_API FCommanderSoundPairing();
};

