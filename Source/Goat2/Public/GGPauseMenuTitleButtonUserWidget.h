#pragma once
#include "CoreMinimal.h"
#include "GGButtonUserWidget.h"
#include "PauseMenuTitleButtonInfo.h"
#include "GGPauseMenuTitleButtonUserWidget.generated.h"

class UNamedSlot;
class USpacer;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGPauseMenuTitleButtonUserWidget : public UGGButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftSlotSpaceX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightSlotSpaceX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* LeftSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* LeftSlotSpacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* RightSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* RightSlotSpacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ButtonSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ButtonActive;
    
    UGGPauseMenuTitleButtonUserWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateButtonPreconstruct(FPauseMenuTitleButtonInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateButtonPreconstruct(FPauseMenuTitleButtonInfo Info);
    
};

