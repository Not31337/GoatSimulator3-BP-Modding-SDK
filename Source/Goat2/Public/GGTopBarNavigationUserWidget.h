#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ETopBarButtonVisibility.h"
#include "GGMenuComponentUserWidget.h"
#include "MenuNavigationContext.h"
#include "OnShouldCreateTopBarMenuItemDelegate.h"
#include "GGTopBarNavigationUserWidget.generated.h"

class UGGMenuDataAsset;
class UGGMenuUserWidget;
class UGGUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGTopBarNavigationUserWidget : public UGGMenuComponentUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGMenuDataAsset*> MenuData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGUserWidget*> ButtonInstances;
    
    UGGTopBarNavigationUserWidget();

    UFUNCTION(BlueprintCallable)
    void ToggleTabButtonVisible(UGGMenuDataAsset* InMenuData, bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    void ToggleTabButtonEnabled(UGGMenuDataAsset* InMenuData, bool bInEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ETopBarButtonVisibility ShouldCreateMenuItem(UGGMenuDataAsset* InMenuData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOwningMenu(UGGMenuUserWidget* InOwningMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggledTabButtonVisible(UGGMenuDataAsset* InMenuData, bool bInVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggledTabButtonEnabled(UGGMenuDataAsset* InMenuData, bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnMenuEntered(FGameplayTag InTag, FMenuNavigationContext Context);
    
    UFUNCTION(BlueprintCallable)
    void NavigateDirection(int32 Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMenuItems();
    
    UFUNCTION(BlueprintCallable)
    void BindShouldCreateMenuItem(FOnShouldCreateTopBarMenuItem Event);
    
};

