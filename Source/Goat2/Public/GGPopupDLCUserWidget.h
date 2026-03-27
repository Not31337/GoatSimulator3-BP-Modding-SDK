#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "DLCLevelData.h"
#include "EGoatDLC.h"
#include "GGPopupUserWidget.h"
#include "GGPopupDLCUserWidget.generated.h"

class UGGDLCPurchaseButtonUserWidget;
class UGGPopupButtonUserWidget;
class UGGUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGPopupDLCUserWidget : public UGGPopupUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGDLCPurchaseButtonUserWidget* PurchaseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGPopupButtonUserWidget* MoreInfoButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGoatDLC DLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCLevelData LevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MoreInfoURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHidePurchaseButtonIfAlreadyOwned;
    
    UGGPopupDLCUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldFocusExternalActionFirst() const;
    
    UFUNCTION(BlueprintCallable)
    void SetMoreInfo(const FString& URL, const FText& ButtonText);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelData(FDLCLevelData InData);
    
    UFUNCTION(BlueprintCallable)
    void SetDLC(EGoatDLC InDLC, const FText& HeaderText);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceOKWithPagination(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetMoreInfo(const FString& URL, const FText& ButtonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetLevelData(FDLCLevelData InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDLC(EGoatDLC InDLC, const FText& HeaderText);
    
    UFUNCTION(BlueprintCallable)
    void OnMoreInfoInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
};

