#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Styling/SlateBrush.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "EPopupResponse.h"
#include "GGMenuComponentUserWidget.h"
#include "GGPopupResponseDelegateDelegate.h"
#include "PopupButton.h"
#include "PopupDataRow.h"
#include "GGPopupUserWidget.generated.h"

class AGGPlayerController;
class UGGButton;
class UGGPopupButtonUserWidget;
class UGGRichTextBlock;
class UGGUserWidget;
class UPanelWidget;
class UScaleBox;
class UTextBlock;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGPopupUserWidget : public UGGMenuComponentUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPopupDataRow Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* PopupOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGPopupResponseDelegate ResponseDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPaginateOnResolve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGPopupButtonUserWidget> PopupButtonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AdditionalMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelOnOutOfFocusArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCannotBeAutomaticallyDismissed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDismissPopupOnKeyUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusAnyButtonAsFallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileScaleBoxContentScaleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBox_Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PopupTitleLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* PopupTitleLabelRich;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* PopupBodyLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PopupBodyLabelLegacy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButton* OutOfFocusArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ButtonContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InitialScaleUpAnim;
    
    UGGPopupUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetImageFromTexture(UTexture2D* Texture, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    bool SetImageFromIconSet(FName IconSetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RequiresUserInputToDismiss();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RequiresUserInputToCancel();
    
    UFUNCTION(BlueprintCallable)
    void RegisterButton(UGGUserWidget* ButtonWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetLabels(const FText& Title, const FText& Body);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetImageURL(const FString& ImageURL);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetImage(const FSlateBrush& Brush);
    
    UFUNCTION(BlueprintCallable)
    void OnPopupButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnOutOfFocusArea();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCreatedButton(const FPopupButton& Button, UGGPopupButtonUserWidget* ButtonWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnActionMappingPressed(FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTopMostPopup();
    
    UFUNCTION(BlueprintCallable)
    void ButtonInteracted(const FString& InID, EPopupResponse InResponse);
    

    // Fix for true pure virtual functions not being implemented
};

