#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EPopupResponse.h"
#include "GGPopupResponseDelegateDelegate.h"
#include "MenuNavigationContext.h"
#include "MenuNavigationContextContainer.h"
#include "OnNavigationContextHandledDelegate.h"
#include "OnRemovedContextHandledDelegate.h"
#include "PopupDataRow.h"
#include "Templates/SubclassOf.h"
#include "GGMenuComponent.generated.h"

class AGGPlayerController;
class AGGPlayerState;
class AGGQuestBase;
class UDataAsset;
class UDataTable;
class UGGInstinctPackDataAsset;
class UGGPopupUserWidget;
class UInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GGPlayerController, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGMenuComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGPopupUserWidget> DefaultPopupWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGPopupUserWidget> SelectableTextPopupWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGPopupUserWidget> CriticalErrorPopupWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PopupDataTable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNavigationContextHandled OnNavigationContextHandled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemovedContextHandled OnRemovedContextHandled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MenuHoldThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* OwningController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMenuNavigationContextContainer> MenuNavigationContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGPopupUserWidget*> ActivePopups;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* PopupInputComponent;
    
public:
    UGGMenuComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ResolvePopup(const FString& ID, EPopupResponse Response, const FString& ButtonID);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePopup(const FString& ID, EPopupResponse Response);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveMenuContext(FGameplayTag MenuTag, FMenuNavigationContext Context);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PauseMenuUp();
    
    UFUNCTION(BlueprintCallable)
    void PauseMenuDown();
    
    UFUNCTION(BlueprintCallable)
    void OnQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUnlockedStore(UDataAsset* Asset, FGameplayTag Context, AGGPlayerController* OptionalPC);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUnlocked(UDataAsset* Asset, FGameplayTag Context, AGGPlayerController* OptionalPC);
    
    UFUNCTION(BlueprintCallable)
    void OnInstinctPackUnlocked(UGGInstinctPackDataAsset* DataAsset, FGameplayTag Context);
    
public:
    UFUNCTION(BlueprintCallable)
    void Mobile_PauseMenuUp();
    
    UFUNCTION(BlueprintCallable)
    void Mobile_PauseMenuDown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActivePopup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentNavigationContext(FGameplayTag MenuID, FGameplayTag& OutMenuTag, FMenuNavigationContextContainer& OutContext, bool bExcludeHold);
    
    UFUNCTION(BlueprintCallable)
    bool CreatePopupCustomUnique(const FString& ID, FPopupDataRow Data, FGGPopupResponseDelegate Event, UGGPopupUserWidget*& OutWidget);
    
    UFUNCTION(BlueprintCallable)
    bool CreatePopupCustom(const FString& ID, FPopupDataRow Data, FGGPopupResponseDelegate Event, UGGPopupUserWidget*& OutWidget);
    
    UFUNCTION(BlueprintCallable)
    bool CreatePopup(const FString& ID, FGGPopupResponseDelegate Event, UGGPopupUserWidget*& OutWidget);
    
    UFUNCTION(BlueprintCallable)
    bool AddMenuContext(FGameplayTag MenuTag, FMenuNavigationContext Context, int32 Priority, float Duration, bool bHold);
    
};

