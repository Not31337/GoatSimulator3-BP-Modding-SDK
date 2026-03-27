#pragma once
#include "CoreMinimal.h"
#include "GGOnOptionIndexChanged_DelegateDelegate.h"
#include "GGSettingOption.h"
#include "GGUserWidget.h"
#include "GGMultipleOptionsOptionUserWidget.generated.h"

class UButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGMultipleOptionsOptionUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* LeftArrowButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* RightArrowButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* OptionLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ControllerFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGSettingOption> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanWrap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnOptionIndexChanged_Delegate OnOptionIndexChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveOption;
    
public:
    UGGMultipleOptionsOptionUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetActiveOption(int32 OptionIndex);
    
    UFUNCTION(BlueprintCallable)
    void RefreshTextLabel();
    
    UFUNCTION(BlueprintCallable)
    void NavigateRight();
    
    UFUNCTION(BlueprintCallable)
    int32 NavigateOptions(int32 CurrentIndex, int32 Direction, bool bWrap);
    
    UFUNCTION(BlueprintCallable)
    void NavigateLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidSelection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetValueAsString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValueAsFloat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAvailableOptions() const;
    
};

