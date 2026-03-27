#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGUserWidget.h"
#include "GGCampUpgradesVaultUserWidget.generated.h"

class UImage;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GOATAPOCALYPSE_API UGGCampUpgradesVaultUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ActiveLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InactiveLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* LightsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* FinishedState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> Lights;
    
public:
    UGGCampUpgradesVaultUserWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateVaultState(bool bFullyUnlocked, bool bReadyToUnlock);
    
    UFUNCTION(BlueprintCallable)
    void ToggleLights(int32 InLightAmount, bool bInToggle);
    
    UFUNCTION(BlueprintCallable)
    void ToggleLightIndex(int32 InLightIndex, bool bInToggle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatedVaultState(bool bFullyUnlocked, bool bReadyToUnlock);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateLights(int32 InLightAmount);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateLightIndex(int32 InLightIndex);
    
    UFUNCTION(BlueprintCallable)
    void ActivateLights(int32 InLightAmount);
    
    UFUNCTION(BlueprintCallable)
    void ActivateLightIndex(int32 InLightIndex);
    
};

