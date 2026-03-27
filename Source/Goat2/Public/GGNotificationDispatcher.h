#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GatherGoatParameters.h"
#include "InviteNotificationParameters.h"
#include "Notification.h"
#include "NotificationProperties.h"
#include "OnNotificationAssignedToWidgetDelegate.h"
#include "OnNotificationDispatchedDelegate.h"
#include "OnNotificationRemovedFromWidgetDelegate.h"
#include "GGNotificationDispatcher.generated.h"

class AActor;
class AGGGoat;
class AGGPlayerController;
class AGGPlayerState;
class UDataAsset;
class UDataTable;
class UGGNotificationUserWidget;
class UGGPlayerGameDataAsset;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GGPlayerController, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGNotificationDispatcher : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNotification> NotificationQueue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NotificationWidgetClassesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultNotificationWidgetClassesDataTable;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotificationDispatched OnNotificationDispatched;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotificationAssignedToWidget OnNotificationAssignedToWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotificationRemovedFromWidget OnNotificationRemovedFromWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* OwningController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGNotificationUserWidget*> RegisteredNotificationWidgets;
    
public:
    UGGNotificationDispatcher(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TestNotificationWidget(TSoftClassPtr<UUserWidget> InWidget, FGameplayTag InPosition, FNotification InNotification);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNotificationDelay(FGameplayTagContainer Tags);
    
    UFUNCTION(BlueprintCallable)
    void OnTokenAmountChanged(int32 Amount, const FString& AcquisitionID, const FString& AcquisitionSource);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerWorldAreaEntered(AGGGoat* Goat, FGameplayTag NewArea);
    
    UFUNCTION(BlueprintCallable)
    void OnMiniGameUnlocked(UGGPlayerGameDataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUnlockedStore(UDataAsset* Asset, FGameplayTag Context, AGGPlayerController* OptionalPC);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUnlocked(UDataAsset* Asset, FGameplayTag Context, AGGPlayerController* OptionalPC);
    
    UFUNCTION(BlueprintCallable)
    void OnInteracted(AActor* SourceActor, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void OnChaosAcquired(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    bool IsNotificationIDInQueue(const FString& InNotificationID, bool bIncludeCurrent);
    
    UFUNCTION(BlueprintCallable)
    bool IsNotificationIDCurrentNotification(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetFirstActiveNotificationWidgetWithID(const FString& NotificationID);
    
    UFUNCTION(BlueprintCallable)
    void CreateNotificationExplicitBlueprint(FNotification Notification);
    
    UFUNCTION(BlueprintCallable)
    void CreateNotificationBlueprint(FGameplayTag Tag, FText Title, FText Body, const FString& ID, FNotificationProperties Properties);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnRemoteEventDiscovered(const FString& GatherID, const FInviteNotificationParameters InviteNotificationParameters, const FGatherGoatParameters GatherGoatParameters, const AGGPlayerState* InvitingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void ClearNotificationDelays();
    
    UFUNCTION(BlueprintCallable)
    void AddNotificationDelay(FGameplayTag Tag, float Delay);
    
};

