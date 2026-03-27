#pragma once
#include "CoreMinimal.h"
#include "GGGameSetting.h"
#include "GGSettingsCategory_Base.h"
#include "GGControlsSettings.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGControlsSettings : public FGGSettingsCategory_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting ToggleSprint;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting FlipSprint;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting FlipMouseCameraRotationX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting FlipMouseCameraRotationY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting ControllerRumble;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting ControllerSensitivityX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting FlipControllerCameraRotationX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting ControllerSensitivityY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting FlipControllerCameraRotationY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting BroomControllerSteeringMode;
    
    FGGControlsSettings();
};

