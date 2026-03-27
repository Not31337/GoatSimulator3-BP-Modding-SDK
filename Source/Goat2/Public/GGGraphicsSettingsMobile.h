#pragma once
#include "CoreMinimal.h"
#include "GGGameSetting.h"
#include "GGSettingsCategory_Base.h"
#include "GGGraphicsSettingsMobile.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGGraphicsSettingsMobile : public FGGSettingsCategory_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting AutoDetectGraphicsSettingsMobile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting OverallQualityMobile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting RAMQualitySetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSetting GPUQualitySetting;
    
    FGGGraphicsSettingsMobile();
};

