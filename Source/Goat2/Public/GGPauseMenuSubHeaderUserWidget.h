#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "GGUserWidget.h"
#include "OnCategoryChanged_DelegateDelegate.h"
#include "PauseMenuTitleButtonInfo.h"
#include "GGPauseMenuSubHeaderUserWidget.generated.h"

class UGGButtonUserWidget;
class UHorizontalBox;
class UNamedSlot;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGPauseMenuSubHeaderUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPauseMenuTitleButtonInfo> ButtonInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGButtonUserWidget> ButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ButtonContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* LeftNavSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* RightNavSlot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCategoryChanged_Delegate OnCategoryChanged_Delegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGButtonUserWidget*> Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* CurrentButton;
    
    UGGPauseMenuSubHeaderUserWidget();

    UFUNCTION(BlueprintCallable)
    void SubHeaderButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreatePauseMenuTitleButton(UGGButtonUserWidget* Widget, FPauseMenuTitleButtonInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategoryChanged();
    
    UFUNCTION(BlueprintCallable)
    bool NavigateCategoryRight();
    
    UFUNCTION(BlueprintCallable)
    bool NavigateCategoryLeft();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCategory(FGameplayTag Category);
    
};

