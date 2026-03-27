#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "GGMenuTabUserWidget.h"
#include "SettingRequiresApplyDelegate.h"
#include "Templates/SubclassOf.h"
#include "GGSettingsTabMenuUserWidget.generated.h"

class UGGGameSettingOptionUserWidget;
class UGGOptionContainerUserWidget;
class UGGScrollBox;
class UGGSettingsTabSectionHeaderUserWidget;
class UGGUserWidget;
class UTextBlock;
class UUserWidget;
class UVerticalBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGSettingsTabMenuUserWidget : public UGGMenuTabUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingsCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGOptionContainerUserWidget> SettingsRowWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGSettingsTabSectionHeaderUserWidget> SectionHeaderWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PaddingSettingsWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGScrollBox* SettingScrollbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* SettingsBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ToolTipLabel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGOptionContainerUserWidget*> OptionUserWidgets;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingRequiresApply OnSettingsRequireApply;
    
    UGGSettingsTabMenuUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetCurrentOptionToolTip(FText Tooltip);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSettingWidgetCreated(UUserWidget* CreatedWidget, bool bIsCategory);
    
    UFUNCTION(BlueprintCallable)
    void OnSettingsRowRequireApply(UGGGameSettingOptionUserWidget* GameSetting);
    
    UFUNCTION(BlueprintCallable)
    void OnOptionHovered(UGGOptionContainerUserWidget* Widget, UGGGameSettingOptionUserWidget* Option);
    
    UFUNCTION(BlueprintCallable)
    void OnOptionFocused(UGGOptionContainerUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    UWidget* HandleListNavigation(EUINavigation NavigationDir);
    
    UFUNCTION(BlueprintCallable)
    void CreateSettingWidgets();
    
public:
    UFUNCTION(BlueprintCallable)
    void BringSettingIntoView(UGGUserWidget* SettingWidget);
    
};

