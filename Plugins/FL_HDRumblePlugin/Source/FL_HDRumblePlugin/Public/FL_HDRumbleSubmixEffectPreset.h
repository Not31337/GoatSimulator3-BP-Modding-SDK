#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundEffectSubmix.h"
#include "FL_HDRumbleSubmixEffectSettings.h"
#include "FL_HDRumbleSubmixEffectPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FL_HDRUMBLEPLUGIN_API UFL_HDRumbleSubmixEffectPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFL_HDRumbleSubmixEffectSettings Settings;
    
    UFL_HDRumbleSubmixEffectPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FFL_HDRumbleSubmixEffectSettings& InSettings);
    
};

