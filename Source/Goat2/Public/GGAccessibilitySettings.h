#pragma once
#include "CoreMinimal.h"
#include "GGGameSetting.h"
#include "GGSettingsCategory_Base.h"
#include "GGAccessibilitySettings.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGAccessibilitySettings : public FGGSettingsCategory_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting CameraSmoothing;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting CameraShakes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting CameraSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting ColorBlindness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting FlipGamepadSticks;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting ShowCrosshair;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGGGameSetting ControllerRumble;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting Subtitles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting SubtitlesTextSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting ShowSubtitlesBackground;
    
    FGGAccessibilitySettings();
};

