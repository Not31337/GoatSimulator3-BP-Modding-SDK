#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EPlayerGamePlayerLobbyState.h"
#include "PlayerGamePlayerInfo.h"
#include "GGPlayerGameManager.generated.h"

class AGGGoat;
class AGGPlayerController;
class AGGPlayerGameStartingPoint;
class AGGPlayerGame_Base;
class AGGPlayerState;
class APawn;
class UGGPlayerGameDataAsset;
class UGGTeleportAreaDataAsset;

UCLASS(Blueprintable)
class GOAT2_API AGGPlayerGameManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LobbyPlayerInfos, meta=(AllowPrivateAccess=true))
    TArray<FPlayerGamePlayerInfo> LobbyPlayerInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerGameInviteDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerInviteTeleportDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RematchDelay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentActiveGame, meta=(AllowPrivateAccess=true))
    AGGPlayerGame_Base* CurrentActiveGame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RematchTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGPlayerGameDataAsset*> PlayerGameAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGGPlayerGameDataAsset>> PlayerGameDataAssets;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AGGPlayerGameStartingPoint*> StartingPoints;
    
    AGGPlayerGameManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool UpdatePlayerGamePlayerInfo(AGGPlayerController* PC);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartNewPlayerGameFromStartingPoint(AGGPlayerGameStartingPoint* StartingPoint, AGGPlayerState* PlayerStartingGameIfAny, bool bForceStart, bool bIsRematch);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartNewPlayerGameFromLocation(UGGPlayerGameDataAsset* DataAsset, FVector GameStartingLocation, AGGPlayerState* PlayerStartingGameIfAny, bool bForceStart, bool bIsRematch);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLobbyState(AActor* Player, TEnumAsByte<EPlayerGamePlayerLobbyState::Type> State);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentActiveGame(AGGPlayerGame_Base* PlayerGame);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayerAnsweredInvite(AGGPlayerController* GGPC, bool Accepted);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTeleportAreaOpening(int32 AreaSlot, UGGTeleportAreaDataAsset* AreaAsset);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartingPointAdded(AGGPlayerGameStartingPoint* StartingPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyPlayerInfos();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentActiveGame();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerGamePlayerInfoChanged(AGGPlayerGame_Base* PlayerGame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerAnsweredInvite(AGGPlayerController* GGPC, bool Accepted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyPlayerInfosChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameInitializedServer(AGGPlayerGame_Base* PlayerGame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameFinished(UGGPlayerGameDataAsset* PlayerGameAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForceGameStart();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void LeaveCurrentGame(AActor* PlayerLeavingGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnoughPlayers(const UGGPlayerGameDataAsset* DataAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerNameFromPlayer(AActor* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerNameFromInfo(FPlayerGamePlayerInfo PlayerInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGGPlayerGameDataAsset*> GetPlayerGameAssets();
    
    UFUNCTION(BlueprintCallable)
    UGGPlayerGameDataAsset* GetPlayerGameAssetFromId(const FString& GameID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    TArray<AGGPlayerController*> GetPCs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfPlayersInLobbyState(TEnumAsByte<EPlayerGamePlayerLobbyState::Type> State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfPlayersAnsweredInvite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPlayerGamePlayerLobbyState::Type> GetLobbyState(AActor* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGGoat*> GetGoats();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGPlayerState* GetGGPlayerStateFromPlayerInfo(FPlayerGamePlayerInfo PlayerInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGPlayerGameDataAsset* GetCurrentGameDataAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGPlayerGame_Base* GetCurrentActiveGame();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAdjustedStartingLocation(FVector StartLocation, float Radius, AGGGoat* GoatToTeleport);
    
    UFUNCTION(BlueprintCallable)
    static void CreateGameInviteNotification_BP(AGGPlayerController* GGPC, AGGPlayerGame_Base* InPlayerGame, float InInviteDuration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AddLobbyPlayerInfo(AGGPlayerController* PC);
    
};

