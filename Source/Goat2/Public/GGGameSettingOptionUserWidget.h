#pragma once
#include "CoreMinimal.h"
#include "EGGGameSettingApplyMode.h"
#include "EGGGameSettingChangeContext.h"
#include "GGGameSetting.h"
#include "GGGameSettingHandle.h"
#include "GGSettingOption.h"
#include "GGUserWidget.h"
#include "SettingRequiresApplyDelegate.h"
#include "GGGameSettingOptionUserWidget.generated.h"

class UGGButtonUserWidget;
class UGGGameSettingOptionUserWidget;
class UGGSettingsTabMenuUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GOAT2_API UGGGameSettingOptionUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingRequiresApply OnSettingsRequireApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* ButtonUserWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCountCommitAsInstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NavigateLeftAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NavigateRightAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGameSettingHandle SettingHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGSettingsTabMenuUserWidget* ParentSettingTab;
    
public:
    UGGGameSettingOptionUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup(FGGGameSettingHandle InSettingHandle, UGGSettingsTabMenuUserWidget* InParentSettingTab);
    
    UFUNCTION(BlueprintCallable)
    void SetSettingValueByIndex(int32 OptionIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSettingValueAsString(const FString& NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSettingValueAsFloat(float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMaxValue(int32 MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHintValue(const FText& InHintText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RunSettingAction() const;
    
    UFUNCTION(BlueprintCallable)
    void RevertUnChangedSettings();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetToDefault();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshOption();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnToggleOption();
    
    UFUNCTION(BlueprintCallable)
    void OnSettingRequireApply(UGGGameSettingOptionUserWidget* ThisSettingWidget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOtherSettingsValueChanged(FGGGameSetting& OtherSetting, EGGGameSettingChangeContext InContext);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeOption(const FString& NewValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEvaluateActiveStatusRequested();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 NavigateOptions(int32 CurrentIndex, int32 Direction, bool bWrap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefaultValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetWidgetSettingValueAsString(bool& OutIsSet);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetWidgetSettingValueAsInt(bool& OutIsSet);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetWidgetSettingValueAsFloat(bool& OutIsSet);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetWidgetSettingValueAsBool(bool& OutIsSet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValueTextFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetValueForOptionIndex(int32 OptionIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetUnAppliedSettingValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetTooltipText();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSettingValueAsString(bool bIncludeValueTextFactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSettingValueAsInt(bool bIncludeValueTextFactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSettingValueAsFloat(bool bIncludeValueTextFactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSettingValueAsBool();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSettingStepSizeMouse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSettingStepSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSettingName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOptionIndexForCurrentValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAvailableOptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinSettingValue(bool bIncludeValueTextFactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSettingValue(bool bIncludeValueTextFactor) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxFractionalDigits() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultValueAsFloat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGGSettingOption> GetAvailableOptions() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGGGameSettingApplyMode GetApplyMode() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplySetting();
    
};

