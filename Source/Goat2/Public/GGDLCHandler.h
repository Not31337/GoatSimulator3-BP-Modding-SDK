#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DLCLevelData.h"
#include "DLCOffer.h"
#include "EGoatDLC.h"
#include "ELoginState.h"
#include "EPopupResponse.h"
#include "OnDLCAvailabilityUpdatedDelegate.h"
#include "OnDLCsUpdatedDelegate.h"
#include "OnNotifyNewDLCDelegate.h"
#include "OnOffersUpdatedDelegate.h"
#include "OnPurchaseCheckoutFlowCompleteDelegate.h"
#include "GGDLCHandler.generated.h"

class UDLCOwnershipSaveGame;
class UGGDLCDataAsset;
class UGGDLCHandler;
class UGGInstinctPackDataAsset;
class UGGLocalPlayer;
class UWorld;

UCLASS(Blueprintable)
class GOAT2_API UGGDLCHandler : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGLocalPlayer* OwnerLocalPlayer;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDLCsUpdated OnDLCsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotifyNewDLC OnNotifyNewDLCUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLCOwnershipSaveGame* EOSDLCOwnershipSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGoatDLC> NotifyNewDLCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGoatDLC, UGGDLCDataAsset*> CachedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCLevelData CurrentDLCLevelData;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOffersUpdated OnOffersUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDLCAvailabilityUpdated OnDLCAvailabilityUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPurchaseCheckoutFlowComplete OnPurchaseCheckoutFlowComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDLCOffer> CachedDLCOffers;
    
public:
    UGGDLCHandler();

protected:
    UFUNCTION(BlueprintCallable)
    void TriggerUnlockedDLCPopup();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartCheckout(EGoatDLC DLC);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDLCLevelData(FDLCLevelData DLCLevelData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PostLoadMapWithWorld(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void OnLoginStateChanged(TEnumAsByte<ELoginState> OldState, TEnumAsByte<ELoginState> NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnIntroSplashComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnFirstInstinctPackUnlocked(UGGInstinctPackDataAsset* Pack);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDLCAvailable(EGoatDLC DLC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOffersBeenQueried() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOfferForDLC(EGoatDLC DLC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EGoatDLC> GetOwnedDLCs() const;
    
    UFUNCTION(BlueprintCallable)
    FDLCOffer GetDLCOffer(EGoatDLC DLC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDLCLevelData GetDLCLevelDataFromID(const FString& LevelDataID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDLCLevelData GetDLCLevelDataFromDLCID(EGoatDLC InDLC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDLCLevelData> GetDLCLevelData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UGGDLCHandler* GetDLCHandler(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDLCLevelData GetCurrentDLCLevelData() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DummyCheckoutPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DLCPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
};

