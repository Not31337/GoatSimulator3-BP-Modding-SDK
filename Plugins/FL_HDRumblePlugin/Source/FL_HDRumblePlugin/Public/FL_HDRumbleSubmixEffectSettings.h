#pragma once
#include "CoreMinimal.h"
#include "FL_HDRumbleSubmixEffectSettings.generated.h"

USTRUCT(BlueprintType)
struct FL_HDRUMBLEPLUGIN_API FFL_HDRumbleSubmixEffectSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSendToAllPlayers;
    
    FFL_HDRumbleSubmixEffectSettings();
};

