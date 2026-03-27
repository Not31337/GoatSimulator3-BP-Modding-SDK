#pragma once
#include "CoreMinimal.h"
#include "GGUserWidget.h"
#include "OnOptionFocusedDelegate.h"
#include "OnOptionHoveredDelegate.h"
#include "Templates/SubclassOf.h"
#include "GGOptionContainerUserWidget.generated.h"

class UGGGameSettingOptionUserWidget;
class UGGOptionInputUserWidget;
class UGGSettingsTabMenuUserWidget;
class UImage;
class USizeBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGOptionContainerUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOptionFocused OnOptionFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOptionHovered OnOptionHovered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SettingsLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* OptionWidgetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGameSettingOptionUserWidget> BoolOptionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGameSettingOptionUserWidget> SliderOptionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGameSettingOptionUserWidget> MultipleOptionsOptionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGameSettingOptionUserWidget> DropdownOptionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGameSettingOptionUserWidget> ButtonOptionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGOptionInputUserWidget> InputRebindWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGameSettingOptionUserWidget* OptionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGSettingsTabMenuUserWidget* ParentSettingTab;
    
public:
    UGGOptionContainerUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleWarningIcon(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFormattedLabelText() const;
    
};

