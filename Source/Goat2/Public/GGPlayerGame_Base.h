#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/NetSerialization.h"
#include "EPlayerGameOutcome.h"
#include "EPlayerGamePhase.h"
#include "EPlayerGamePlayerState.h"
#include "PlayerGamePlayerInfo.h"
#include "PlayerGameScoreBoardData.h"
#include "GGPlayerGame_Base.generated.h"

class AGGGoat;
class AGGPlayerController;
class AGGPlayerGameStartingPoint;
class AGGPlayerState;
class APawn;
class UGGPlayerGameDataAsset;

UCLASS(Abstract, Blueprintable)
class GOAT2_API AGGPlayerGame_Base : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsRematch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPlayerGamePhase::Type> PlayerGamePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasGameEverInDrawPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoSilentCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPlayerGameOutcome::Type> PlayerGameOutcome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AGGPlayerState* StartingPlayerIfAny;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize GameStartingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayAreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayAreaHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutOfBoundsMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AGGPlayerGameStartingPoint* PlayerGameStartingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float GameInviteTS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UGGPlayerGameDataAsset* PlayerGameDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerInfos, meta=(AllowPrivateAccess=true))
    TArray<FPlayerGamePlayerInfo> PlayerInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScoreCanBeNegative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TokenReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LockPlayerOnReadyPoints;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AGGPlayerState*, bool> CanGetScoreMap;

    FLinearColor GetColorForState_Implementation(TEnumAsByte<EPlayerGamePlayerState::Type> InState);
    
    void OnPhaseChanged_Implementation(TEnumAsByte<EPlayerGamePhase::Type> NewPhase, TEnumAsByte<EPlayerGameOutcome::Type> GameOutcome);
public:
    AGGPlayerGame_Base(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool UpdatePlayerGamePlayerInfo(AGGPlayerController* PC);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ToggleCanGetScoreForPlayer(AGGPlayerState* PlayerState, bool CanGetScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShowScoresEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetScoreForPlayer(const AGGPlayerState* PlayerState, float NewScore, bool Force);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPlayerState(AGGPlayerState* PlayerState, TEnumAsByte<EPlayerGamePlayerState::Type> State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetScoreForPlayerBlueprint(APawn* Player, float NewScore);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnSetScoreForPlayer(APawn* Player, float NewScore);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerInfos();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerStayedOutsideBounds(AGGPlayerController* PlayerController, EPlayerGamePhase::Type GamePhase, EPlayerGamePlayerState::Type PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerStateChanged(AGGPlayerController* PlayerController, EPlayerGamePlayerState::Type OldState, EPlayerGamePlayerState::Type NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLeftBounds(AGGPlayerController* PlayerController, EPlayerGamePhase::Type GamePhase, EPlayerGamePlayerState::Type PlayerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerInfosChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEnteredBounds(AGGPlayerController* PlayerController, EPlayerGamePhase::Type GamePhase, EPlayerGamePlayerState::Type PlayerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPhaseTick(EPlayerGamePhase::Type NewPhase, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPhaseChangedBlueprint(EPlayerGamePhase::Type NewPhase);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnPhaseChanged(EPlayerGamePhase::Type NewPhase, EPlayerGameOutcome::Type GameOutcome);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnParticipatingPlayerLeft(AActor* Actor);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void LeavePlayerGame(const FPlayerGamePlayerInfo& PlayerLeavingGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInCurrentGame(const AGGPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamePlaying() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsActorWithinBounds(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasPlayArea();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGPlayerState* GetWinningPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScoreForPlayer(const AGGPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredMinimumParticipants() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FPlayerGamePlayerInfo> GetPlayerInfosInState(TEnumAsByte<EPlayerGamePlayerState::Type> PlayerState, bool bLocalOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerGamePlayerInfo GetPlayerInfo(const AGGPlayerState* PlayerState, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPlayerColorFromInfo(FPlayerGamePlayerInfo PlayerInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPlayerColorFromGGPlayerState(AGGPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    TArray<FPlayerGameScoreBoardData> GetOrderedScoreBoardData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfPlayersNotInState(TEnumAsByte<EPlayerGamePlayerState::Type> State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfPlayersInState(TEnumAsByte<EPlayerGamePlayerState::Type> State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPlayerGamePlayerInfo> GetLocalPlayerInfos(bool bIncludeLeavers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerGamePlayerInfo GetInfoFromColorIndex(int32 Index, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable)
    TArray<AGGGoat*> GetGoatsFromPlayerInfos(TArray<FPlayerGamePlayerInfo> PlayerGameInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGGoat*> GetGoats();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGPlayerState* GetGGPlayerStateFromPlayerInfo(FPlayerGamePlayerInfo PlayerInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGPlayerState* GetFirstPlayerInState(TEnumAsByte<EPlayerGamePlayerState::Type> State);
    
    UFUNCTION(BlueprintCallable)
    FPlayerGamePlayerInfo GetFirstLocalPlayerInfo(bool bIncludeLeavers, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    TArray<AGGPlayerController*> GetControllersFromPlayerInfos(TArray<FPlayerGamePlayerInfo> PlayerGameInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FLinearColor GetColorForState(EPlayerGamePlayerState::Type InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPlayerGamePlayerInfo> GetActivePlayers(bool bAliveOnly, bool bLocalOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGPlayerState*> GetActiveGGPlayerStates(bool bAliveOnly, bool bLocalOnly);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void FinishPlayerGame();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EndGame(TEnumAsByte<EPlayerGameOutcome::Type> GameOutcome);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void DecideWinner(TEnumAsByte<EPlayerGameOutcome::Type>& OutOutcome);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ClearPlayerGamePlayerInfo();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeScoreForPlayer(const AGGPlayerState* PlayerState, float ChangeScoreBy, bool Force);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangePhase(TEnumAsByte<EPlayerGamePhase::Type> NewPhase);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AddOrEditPlayerGamePlayerInfo(AGGPlayerController* PC);
    
};

