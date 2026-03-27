#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GGNotificationTestingStatics.generated.h"

class AGGPlayerController;
class UGGGoatGearInfoDataAsset;
class UGGInventory;
class UGGNotificationDispatcher;

UCLASS(Blueprintable)
class GOAT2_API UGGNotificationTestingStatics : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNotificationDispatcher* NotificationDispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGGGoatGearInfoDataAsset> TestGoatGearInfoDataAsset;
    
    UGGNotificationTestingStatics();

    UFUNCTION(BlueprintCallable)
    void TestFunction();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerWorldAreaEntered();
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUnlockedStore();
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUnlocked();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDelayedOnSplitScreenUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChaosAcquiredUnlockable();
    
    UFUNCTION(BlueprintCallable)
    void OnChaosAcquired();
    
    UFUNCTION(BlueprintCallable)
    void MiniGameUnlockedWidget();
    
    UFUNCTION(BlueprintCallable)
    void InstinctUnlockedWidget();
    
    UFUNCTION(BlueprintCallable)
    void GoatTowerSynchronizedWidget();
    
    UFUNCTION(BlueprintCallable)
    void GatherGoats_CreateInviteNotification();
    
    UFUNCTION(BlueprintCallable)
    void GatherGoats_CreateGoatCountNotification();
    
    UFUNCTION(BlueprintCallable)
    void CreateTrinketNotification();
    
    UFUNCTION(BlueprintCallable)
    void CreateRemoteQuestCompletedNotification();
    
    UFUNCTION(BlueprintCallable)
    void CreateRegularMessageNotification();
    
    UFUNCTION(BlueprintCallable)
    void CreateQuestDiscoveredRemoteNotification();
    
    UFUNCTION(BlueprintCallable)
    void CreateQuestDiscoveredNotification();
    
    UFUNCTION(BlueprintCallable)
    void CreateQuestCompletedSplashNotification();
    
    UFUNCTION(BlueprintCallable)
    void CreatePlayerGameInviteNotification();
    
    UFUNCTION(BlueprintCallable)
    void CreateInviteNotification_StretchGoal();
    
    UFUNCTION(BlueprintCallable)
    void CreateInviteNotification_BossPortal();
    
    UFUNCTION(BlueprintCallable)
    void CreateInviteNotification();
    
    UFUNCTION(BlueprintCallable)
    void CreateGoatTowerNewEventsNotification();
    
    UFUNCTION(BlueprintCallable)
    void CreateFormerGearUnlockedNotification();
    
    UFUNCTION(BlueprintCallable)
    void AcquireTokens();
    
};

