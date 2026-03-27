#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameUserSettings.h"
#include "GameplayTagContainer.h"
#include "GGApplyUnChangedSettings_DelegateDelegate.h"
#include "GGAudioSettings.h"
#include "GGDelegateHandleWrapper.h"
#include "GGGameSetting.h"
#include "GGGameSettingHandle.h"
#include "GGGeneralSettings.h"
#include "GGGraphicsSettings.h"
#include "GGGraphicsSettingsMobile.h"
#include "GGOnSettingApplied_K2DelegateDelegate.h"
#include "GGOnSettingsSavedDelegate.h"
#include "GGResetActiveSettingsTabDelegate.h"
#include "GGRevertUnChangedSettings_DelegateDelegate.h"
#include "GGGameUserSettings.generated.h"

class AGGPlayerController;
class UGGGameUserSettings;
class UGGInputBindingsSaveGame;
class UGGLocalPlayer;
class UGGPreferencesSaveGame;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGeneralSettings GeneralSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGraphicsSettings GraphicsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGAudioSettings AudioSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGraphicsSettingsMobile GraphicsSettingsMobile;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGApplyUnChangedSettings_Delegate ApplyUnSavedSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGRevertUnChangedSettings_Delegate RevertUnSavedSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGResetActiveSettingsTab ResetActiveSettingsTab;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnSettingsSaved OnSettingsSaved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGInputBindingsSaveGame* InputMappingSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGPreferencesSaveGame* PreferencesSaveGame;
    
public:
    UGGGameUserSettings();

    UFUNCTION(BlueprintCallable)
    void SetNetworkSetting(bool bWantsToBeOnline, bool bSaveWithoutApplying);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRateLimit_Always(float NewLimitFPS);
    
    UFUNCTION(BlueprintCallable)
    void RequestUIUpdateBlueprint();
    
protected:
    UFUNCTION(BlueprintCallable)
    static void RemoveDelegateFromOnSettingApplied(FGGDelegateHandleWrapper InHandle, FGameplayTag InSetting);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnScalabilitySettingApplied(FGGGameSetting& InSetting);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterModelQualityChanged(FGGGameSetting& InSetting);
    
    UFUNCTION(BlueprintCallable)
    void OnAudioSettingChanged(FGGGameSetting& InSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void LogInputBindings(int32 PlayerIndex) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGGGameSettingHandle> GetRelevantSettingHandlesInCategoryForPlayer(FName CategoryName, UGGLocalPlayer* LocalPlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetRelevantCategoriesForPlayer(UGGLocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAboveRecomendedGPUSettingMobile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetCameraInputSensitivity(const AGGPlayerController* PlayerController);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGGGameSettingHandle> GetAllSettingHandlesInCategory(FName CategoryName, UGGLocalPlayer* LocalPlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetAllCategoryNames(UGGLocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGGGameUserSettings* Get();
    
protected:
    UFUNCTION(BlueprintCallable)
    static FGGDelegateHandleWrapper BindDelegateToOnSettingApplied(FGGOnSettingApplied_K2Delegate InDelegate, FGameplayTag InSetting, UObject* PlayerReference);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyScalabilitySettings() const;
    
};

