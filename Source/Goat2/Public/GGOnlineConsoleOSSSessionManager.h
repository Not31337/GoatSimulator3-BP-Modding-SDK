#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPopupResponse.h"
#include "EStateChangeSource.h"
#include "EStretchGoalStates.h"
#include "GGGameSetting.h"
#include "GGOnlineConsoleOSSSessionManager.generated.h"

class AGGCastleStretchGoal;
class UGGLocalPlayer;
class UNetDriver;
class UWorld;

UCLASS(Blueprintable, Transient)
class GOAT2_API UGGOnlineConsoleOSSSessionManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGLocalPlayer* OwningLocalPlayer;
    
public:
    UGGOnlineConsoleOSSSessionManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateLastWorldCollectionLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnStretchGoalChangedState(AGGCastleStretchGoal* Goal, EStretchGoalStates State, EStateChangeSource Source);
    
    UFUNCTION(BlueprintCallable)
    void OnSplitScreenStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnSplitScreenEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkErrorPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveSplitScreenForInviteResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
    UFUNCTION(BlueprintCallable)
    void OnGoOnlinePopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
    UFUNCTION(BlueprintCallable)
    void OnGeneralNetworkSettingChange(FGGGameSetting& InSetting);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDLCsUpdated();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleDisconnect(UWorld* InWorld, UNetDriver* NetDriver);
    
};

