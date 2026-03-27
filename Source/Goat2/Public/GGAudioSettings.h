#pragma once
#include "CoreMinimal.h"
#include "GGGameSetting.h"
#include "GGSettingsCategory_Base.h"
#include "GGAudioSettings.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGAudioSettings : public FGGSettingsCategory_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting MasterVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting SFXVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting VoiceVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting MusicVolume;
    
    FGGAudioSettings();
};

