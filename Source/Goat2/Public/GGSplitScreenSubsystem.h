#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DelayedOnSplitscreenUpdatedDelegate.h"
#include "ECanStartSplitScreenResult.h"
#include "Gamepad.h"
#include "InputUser.h"
#include "OnGamepadConnectionsUpdatedDelegate.h"
#include "OnPlayerLayerPaintedDelegate.h"
#include "OnSplitScreenEndedDelegate.h"
#include "OnSplitScreenStartedDelegate.h"
#include "OnSplitscreenPlayersUpdatedDelegate.h"
#include "SavedGearData.h"
#include "SplitScreenPlayerData.h"
#include "GGSplitScreenSubsystem.generated.h"

class APlayerController;
class UGGLocalPlayer;
class ULocalPlayer;
class UObject;
class USplitScreenPlayerObject;
class UWorld;

UCLASS(Blueprintable)
class GOAT2_API UGGSplitScreenSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerInputHeldDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSavedGearData> DefaultFurs;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSplitscreenPlayersUpdated OnSplitscreenPlayersUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSplitScreenStarted OnSplitScreenStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSplitScreenEnded OnSplitScreenEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelayedOnSplitscreenUpdated DelayedOnSplitScreenUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGamepadConnectionsUpdated OnGamepadConnectionsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLayerPainted OnPlayerLayerPainted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULocalPlayer*> PlayersWaitingForScreenPaint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGamepad> Gamepads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputUser> InputUsers;
    
public:
    UGGSplitScreenSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopSplitScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SplitscreenControllerIDExists(int32 ControlledID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SlateControllerIdExists(int32 SlateUserIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void SetShouldListenForLeaving(bool bShouldListen);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldListenForJoining(bool bShouldListen);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnePlayerById(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnePlayer(APlayerController* PlayerController);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PostLoadMapWithWorld(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void OnUserRegistered(int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSwitchDockedChanged(bool IsDocked);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionDestroyed(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnControllerPairingChange(int32 ControllerIndex, int32 NewUserPlatformId, int32 OldUserPlatformId);
    
    UFUNCTION(BlueprintCallable)
    void OnControllerConnectionChange(bool bConnected, int32 UserId, int32 ControllerId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float IsUserLeaving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUserJoining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSplitScreenActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamepadConnected(int32 GamepadIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamepadClaimed(int32 GamepadIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamepadAvailableForPlayerIndex(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAwaitingSplitScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyGamepadConnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMouseAndKeyboardAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUserHeldLeavingDuration(int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUserHeldJoiningDuration(int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USplitScreenPlayerObject*> GetSplitScreenPlayerObjects(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSplitScreenPlayerNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSplitScreenPlayerData> GetSplitScreenPlayerData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOpenSplitScreenSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfConnectedGamepads() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextSplitScreenIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGGLocalPlayer*> GetGGLocalPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGLocalPlayer* GetGGLocalPlayer(int32 ControllerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGamepad> GetGamepads() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGamepadClaimedByUser(int32 UserIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECanStartSplitScreenResult CanStartSplitScreen(bool bCanLogAndPrint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanListenForLeaving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanListenForJoining() const;
    
    UFUNCTION(BlueprintCallable)
    UGGLocalPlayer* AddOnePlayer(int32 UserIndex, bool bSpawnPawn, int32 ClaimGamepadIndex);
    
};

