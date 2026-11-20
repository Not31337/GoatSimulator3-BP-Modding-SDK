#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "GGMenuTabUserWidget.h"
#include "GGTitleScreenIndexUserWidget.generated.h"

class UGGButtonUserWidget;
class UGGUserWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGTitleScreenIndexUserWidget : public UGGMenuTabUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGButtonUserWidget> DefaultMenuButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ButtonsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGUserWidget* SocialMediaWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* GameShareButtonRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* GoOnlineButtonRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* FriendsButtonRef;
    
public:
    UGGTitleScreenIndexUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetLastOpenedMenuTab(FGameplayTag InMenuTab);
    
    UFUNCTION(BlueprintCallable)
    void PostConstruct();
    
    UFUNCTION(BlueprintCallable)
    void OnGameShareButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetLastOpenedMenuTab();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetGameShareButtonVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameShareButtonEnabled();
    
};

