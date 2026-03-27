#pragma once
#include "CoreMinimal.h"
#include "DLCLevelData.h"
#include "EGoatDLC.h"
#include "EPopupResponse.h"
#include "GGGameInstanceSubsystem.h"
#include "OnNotificationPopupClosedDelegate.h"
#include "UpdateNotificationData.h"
#include "GGUpdateNotifierSubsystem.generated.h"

class UGGDLCDataAsset;
class UObject;
class UWorld;

UCLASS(Blueprintable, Config=GoatNews)
class GOAT2_API UGGUpdateNotifierSubsystem : public UGGGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotificationPopupClosed OnNotificationPopupClosed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUpdateNotificationData> CachedUpdatesInRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUpdateNotificationData> AllCachedUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUpdateNotificationData> UnreadNewsInQueue;
    
public:
    UGGUpdateNotifierSubsystem();

    UFUNCTION(BlueprintCallable)
    bool ShowUpsellPopupDLC(EGoatDLC InDLC);
    
private:
    UFUNCTION(BlueprintCallable)
    void PostLoadMapWithWorld(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyNewDLCUnlocked(const UGGDLCDataAsset* DLCDataAsset);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnNotifyHostInDLCSession(EGoatDLC DLC);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyClientJoinDLCSession(EGoatDLC DLC);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyClientInDLCSession(EGoatDLC DLC);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLevelStartLoadingScreenRemoved();
    
    UFUNCTION(BlueprintCallable)
    void OnIntroSplashComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnDLCsUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyPlayerAboutUpdate(FName UpdateName);
    
private:
    UFUNCTION(BlueprintCallable)
    void NotificationPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNewsPrefNameFromLevelData(FDLCLevelData LevelData);
    
private:
    UFUNCTION(BlueprintCallable)
    bool GetCachedUpdateFromPrefName(FName PrefName, FUpdateNotificationData& OutData);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ForceNewsRetrigger(FName PrefName, bool bPaginationOrigin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowUpsellPopupDLC(EGoatDLC InDLC);
    
};

