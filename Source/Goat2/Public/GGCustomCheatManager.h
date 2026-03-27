#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ConsoleSettings.h"
#include "GGCustomCheatManager_Base.h"
#include "GGCustomCheatManager.generated.h"

class AActor;
class AGGGoat;
class AGGNPC;
class AGGPlayerController;
class AGGStatusEffectSlippery_Greasy;
class AGGVehicle;
class APawn;
class APlayerController;
class IGGRadarInterface;
class UGGRadarInterface;
class UGGPlayerGameDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Engine, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGCustomCheatManager : public UGGCustomCheatManager_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GoatBugitLocation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGVehicle> ConsoleVehicleClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGVehicle> ConsoleBikeClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGStatusEffectSlippery_Greasy> GreasyStatusClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AGGVehicle>> ConsoleVehicleArray;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AGGNPC>> NPCClasses;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StoredDestroyClassContaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StoredDestroyActorsWithComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInCursorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBoundMouseDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> SelectedActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ProfilingCameras;
    
public:
    UGGCustomCheatManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void UnlockStretchGoals(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockMiniGame(const FString& MiniGameDataAssetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockGoatGear(const FString& GearID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllVanillaTestGoatGear();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllVanillaGoatGear();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllVanillaAchievements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllTestGoatGearForPlugin(const FString& PluginName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllTestGoatGear();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllMiniGames();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllInstinctPacks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllGoatGearForPlugin(const FString& PluginName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllGoatGear();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAchievementForAll(const FString& AchievementID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAchievement(const FString& AchievementID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnEquipGoatGear(const FString& GearID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TurnOnSun();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TurnOffSun();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerEnsure();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TravelTo_Island();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TravelTo_ClosedRoom();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TravelTo_Boss();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TravelTo_BasicGoat();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleLocomotionDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGoatNavInvoker();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugLanguage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestRPCBug(int32 TestMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToMicroEventActor(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportAndCompleteAllQuests();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SyncAllTowers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartPSOSequence();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartMobileProfile(const FString& Area, int32 NumFrames, int32 WarmUp, int32 StartProfilingIn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartMiniGame(const FString& MiniGameDataAssetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpreadStatusToSelf(int32 Status);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpreadStatusToSelected(int32 Status);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpreadStatus(float Radius, int32 Status);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SplitScreenStop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SplitScreenAddPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpendTokens(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnNPC(const FString& NPCName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnCars(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnCar();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnBike();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkipIntro();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowHUDGG();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetToggleSprint(bool bShouldUseToggle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSelectedScale(float Scale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMood(float Radius, const FString& Mood);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGFurVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetFlippedSprint(bool bShouldUseFlipped);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void SetDeviceProfile(const FString& DeviceProfileName) const;
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllPActorsNetDormant();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllPActorsNetAwake();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTestRPCBug(AGGGoat* CalledFromGoat, int32 TestMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTeleportAndCompleteAllQuests(APlayerController* PC, const TArray<TScriptInterface<IGGRadarInterface>>& Items);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStopMiniGame(AGGPlayerController* CalledFromController, const FString& GameOutcome);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartMiniGame(AGGPlayerController* CalledFromController, const FString& MiniGameDataAssetName, bool bForceStart);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnCars(APawn* CalledFromPawn, int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSpawnCar(AGGGoat* CalledFromGoat);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSpawnBike(AGGGoat* CalledFromGoat);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetMood(float Radius, const FString& Mood);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPoolCivilians(APawn* CalledFromPawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLevelTeleport(APawn* CalledFromPawn, int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGoatGodMode(APawn* CalledFromPawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDestroyStaticMeshes();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDestroyClassContaining(const FString& classType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDestroyActorsWithComponent(const FString& classType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCompleteQuest(APlayerController* PC, const FString& QuestID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCompleteAllQuests(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClearGear(APawn* CalledFromPawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAreaDamage(APawn* CalledFromPawn, float Range, float Power);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SendPSOFile();
    
    UFUNCTION(BlueprintCallable)
    void SelectiveCheatsTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RespawnPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetWorldSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetQuest(const FString& QuestID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetPlayerQuestProgress();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetPlayerColor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetIgnoreInput();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetGoatProgression();
    
    UFUNCTION(BlueprintCallable)
    void RequestQuickCommandsMenu();
    
    UFUNCTION(BlueprintCallable)
    void RequestEventDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    void RequestCheatMenuGamepad();
    
    UFUNCTION(BlueprintCallable)
    void RequestCheatMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReportQuestStepNextClosest(bool Complete);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReportQuestStep(const FString& QuestID, const FString& StepID, bool Complete);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReportQuestProgressClosest(int32 Progress);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReportQuestProgress(const FString& QuestID, int32 Progress);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveTutorials();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveLoadingScreen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RebuildAllNavMesh();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintStringTableEntry(const FString& TableId, const FString& TableKey);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintFinishedDialogueBranches();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintFactsDatabase();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintCompletedEvents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintChaos();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintAllCCDComps();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PoolCivilians();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenRemoved();
    
    UFUNCTION(BlueprintCallable)
    void NextProfileCamera();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void LogInputBindings();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListAllMicroEventActors();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListAllActiveWidgets();
    
    UFUNCTION(BlueprintCallable)
    void LevelTeleport(APawn* CalledFromPawn, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void LeftMouseDown();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ImportProgression();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GoatGodMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GoatBugit(const FString& Desc);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_StartLevelOffline();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_SetMultiplayerLocked(bool bNewLocked);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_SendChatMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_SearchForLobbiesWithJoinCode(const FString& JoinCode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_SearchForLobbies();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_RejectAllLobbyInvites();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_ReadFriendList();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_QueryReceipts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_QueryOffers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_QueryAchievements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_PrintJoinCode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_NewLobby();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_MakeWorldListen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_LogoutAndForget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_Logout();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_LoginAndConnectAccount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_LobbyStartLevel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_LeaveLobby();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_JoinLobbySearchResult();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_JoinLobbyJoinCode(const FString& JoinCode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_JoinLobby(const FString& LobbyId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_DeveloperLoginCustom(const FString& CredentialsName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_DeveloperLogin_Test4();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_DeveloperLogin_Test3();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_DeveloperLogin_Test2();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_DeveloperLogin_Test1();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_Checkout();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_BrowseURL(const FString& URL);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_AddDummyLobby(bool bOwner);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GGOnline_AddDummyFriends(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceStopMinigame(const FString& GameOutcome);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceStartMiniGame(const FString& MiniGameDataAssetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceNonPrimaryPlayerMinigameAccept();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FlushSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FixSettingsSaveFiles();
    
    UFUNCTION(BlueprintCallable)
    UGGPlayerGameDataAsset* FindPlayerGameDataAsset(const FString& DataAssetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FindDuplicateQuestIDs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExportProgression();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EquipNPCTestAltGoat();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EquipGoatGear(const FString& GearID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllNetActiveObjects();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllCullDistances();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpActiveGPUParticles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DLC_QueryReceipts();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisableStaticMeshPostLoad();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyStaticMeshes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroySelectedActor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyClassContaining(const FString& classType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyActorsWithComponent(const FString& classType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEvent(const FString& EventID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CrashGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteQuest(const FString& QuestID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteAllQuests();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearStatusEffect();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearMiniGameSaveData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearGear();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CG();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AreaDamage(float Range, float Power);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddTokens(int32 Amount);
    
protected:
    UFUNCTION()
    void AddSpawnCarsAutocompletion(TArray<FAutoCompleteCommand>& AutoCompleteList);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void AddChaos(int32 Amount);
    
};

