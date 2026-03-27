#pragma once
#include "CoreMinimal.h"
#include "EGGLobbyUpdateType.h"
#include "GGMobileControlsLayoutBase.h"
#include "GGMobileQuickCommandsUI.generated.h"

class UButton;
class UGGMobileControlsLayoutDefault;
class UGGMobileControlsUserWidget;
class UImage;
class UMaterialInstanceDynamic;
class UScaleBox;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2MOBILE_API UGGMobileQuickCommandsUI : public UGGMobileControlsLayoutBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* QuickCommandsScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* PauseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PauseButtonOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* SettingsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* SlowMotionButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseButtonTeleportMinTouchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseButtonTeleportLineMaterialStartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseButtonTeleportLineMaterialEndValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LineMaterialParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGGMobileControlsUserWidget* BaseUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGGMobileControlsLayoutDefault* DefaultControlsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PauseButtonOutlineDynamicMaterial;
    
public:
    UGGMobileQuickCommandsUI();

private:
    UFUNCTION(BlueprintCallable)
    void SettingsButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void PauseButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void PauseButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnToggleCinematicUIVisibility(bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestDiscovered(float SplashDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyUpdate(TEnumAsByte<EGGLobbyUpdateType> LobbyUpdateType);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterExitDamCannon(bool bIsInsideCannon);
    
};

