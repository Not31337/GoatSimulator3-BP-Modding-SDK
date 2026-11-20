#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "GGMenuTabUserWidget.h"
#include "GGOptionsMenuIndexUserWidget.generated.h"

class UGGButtonUserWidget;
class UGGSidebarPanelWidget;
class UGGUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGOptionsMenuIndexUserWidget : public UGGMenuTabUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGButtonUserWidget> DefaultMenuButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGSidebarPanelWidget* ButtonsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* FriendsButton;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* GameShareButtonRef;
    
public:
    UGGOptionsMenuIndexUserWidget();

    UFUNCTION(BlueprintCallable)
    void OnGameShareButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMainMenuLevelName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetGameShareButtonVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameShareButtonEnabled();
    
};

