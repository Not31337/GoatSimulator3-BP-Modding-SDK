#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EGGMobileAppVersion.h"
#include "GGGoatSimulatorMobileSettings.generated.h"

class UGGPopupUserWidget;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Game)
class GOAT2MOBILE_API UGGGoatSimulatorMobileSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGMobileAppVersion MobileAppVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMakingMobileBuilds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LandscapePaths;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PluginsWithPlatformMobileAssets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGPopupUserWidget> MobileMultiversePopupClass;
    
    UGGGoatSimulatorMobileSettings();

};

