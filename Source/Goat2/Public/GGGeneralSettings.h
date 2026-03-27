#pragma once
#include "CoreMinimal.h"
#include "GGGameSetting.h"
#include "GGSettingsCategory_Base.h"
#include "GGGeneralSettings.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGGeneralSettings : public FGGSettingsCategory_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting TextLanguage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting ResetSave;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting NetworkSetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting OnlineAccount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting DLC_OST;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting DemoPressMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting MobileEULAButton;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting MobilePrivacyPolicyButton;
    
    FGGGeneralSettings();
};

