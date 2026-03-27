#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActionHintStruct.h"
#include "DLCMenuReplacementData.h"
#include "GGUserWidget.h"
#include "MenuNavigationContext.h"
#include "OnExitChildMenuDelegate.h"
#include "OnMenuEnteredDelegate.h"
#include "OnMenuExitedDelegate.h"
#include "OnMenuTabChangedDelegate.h"
#include "GGMenuUserWidget.generated.h"

class UCanvasPanel;
class UGGActionHintBarUserWidget;
class UGGMenuDataAsset;
class UGGMenuUserWidget;
class UPanelWidget;
class UUserWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class GOAT2_API UGGMenuUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGActionHintBarUserWidget* ActionHintBarWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ExitAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuTabChanged OnMenuTabChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitChildMenu OnExitChildMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* TabContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MenuID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StoreTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnShouldCloseMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockMenuExiting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideGameHUDOnEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitOneChildMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionHintStruct> DefaultActionHints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionHintStruct> ActiveActionHints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionMappingToListenFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NavigateTabLeftMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NavigateTabRightMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AdditionalMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGMenuDataAsset*> MenuData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGMenuUserWidget*> ActiveWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGUserWidget*> AdditionalWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGMenuDataAsset* CurrentMenuDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMenuUserWidget* CurrentTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* InitialWidgetToFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CachedWidgetToFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuEntered OnMenuEnteredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuExited OnMenuExitedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMenuUserWidget* OwningMenu;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UUserWidget*> CurrentLoadingPlaceholders;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDLCMenuReplacementData> DLCMenuReplacementData;
    
public:
    UGGMenuUserWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateActionHints();
    
    UFUNCTION(BlueprintCallable)
    UGGUserWidget* SpawnAdditionalWidget(TSoftClassPtr<UGGUserWidget> WidgetClass, bool bAddToScreen, UGGUserWidget* FromWidget, UPanelWidget* ParentWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldDisplayActionHint(FActionHintStruct Hint);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockMenuExiting(bool bBlockEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool ResetLastFocus();
    
    UFUNCTION(BlueprintCallable)
    bool RequestTabNavigation(FGameplayTag InTag, FMenuNavigationContext Context);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReplaceAllDLCMenus();
    
public:
    UFUNCTION(BlueprintCallable)
    bool RemoveAdditionalWidget(UGGUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    UGGUserWidget* RegisterAdditionalWidget(UGGUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateActionHints();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnTabNavigation(FGameplayTag InTag, FMenuNavigationContext Context);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabChangedBlueprint(FGameplayTag InTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSplitscreenUpdate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSplitscreenPlayerUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnRequestingTabNavigation(FGameplayTag InTag, FMenuNavigationContext Context);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMenuExited(FGameplayTag InTag, FMenuNavigationContext Context);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMenuEntered(FGameplayTag InTag, FMenuNavigationContext Context);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMenuDataReplaced(UGGMenuDataAsset* MenuToBeRemoved, UGGMenuDataAsset* MenuToBeAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadChanged(bool bGamepadActive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAdditionalWidgetSpawned(UGGUserWidget* SpawnedWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAdditionalWidgetRemoved(UGGUserWidget* RemovedWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnActionMappingPressed(FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidActionHint(const FActionHintStruct& Hint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMenuClosing();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEnabledActionHint(FActionHintStruct Hint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsContextAssetValidForMenu(FMenuNavigationContext Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnhandledContext();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGUserWidget* GetWidgetWithID(FGameplayTag ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGMenuUserWidget* GetOwningMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetLastMenuRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FGameplayTag GetCurrentMenuID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMenuNavigationContext GetCurrentContext();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetActionHints(TArray<FActionHintStruct>& OutHints);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishedLoading(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ExitCurrentMenu();
    
    UFUNCTION(BlueprintCallable)
    bool CloseMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeganLoading(FGameplayTag InTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActionMappingPressed();
    
};

