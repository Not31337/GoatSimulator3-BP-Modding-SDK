#pragma once
#include "CoreMinimal.h"
#include "GGMobileControlsUserWidget.h"
#include "GGMobileControlsUserWidget_MV.generated.h"

class AGGIntro;
class UGGMobileControlsLayoutMedusa;
class UGGTeleportAreaDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class GOATMULTIVERSE_API UGGMobileControlsUserWidget_MV : public UGGMobileControlsUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMobileControlsLayoutMedusa* MedusaControlsWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGGIntro* CapybaraIntro;
    
public:
    UGGMobileControlsUserWidget_MV();

private:
    UFUNCTION(BlueprintCallable)
    void OnTeleportAreaClosing(int32 AreaSlot, UGGTeleportAreaDataAsset* AreaAsset);
    
    UFUNCTION(BlueprintCallable)
    void OnMVIntroSkipped();
    
    UFUNCTION(BlueprintCallable)
    void OnMVIntroFinished(AGGIntro* Intro);
    
    UFUNCTION(BlueprintCallable)
    void OnExitMedusa();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredMedusa();
    
};

