#include "GGCustomCheatManager.h"

UGGCustomCheatManager::UGGCustomCheatManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GoatBugitLocation = TEXT("C:\\Users\\GoneNorthGames\\Documents\\TestLocation");
    this->ConsoleVehicleArray.AddDefaulted(34);
    this->NPCClasses.AddDefaulted(26);
    this->bInCursorMode = false;
    this->bHasBoundMouseDown = false;
}

void UGGCustomCheatManager::UnlockStretchGoals(int32 Amount) {
}

void UGGCustomCheatManager::UnlockMiniGame(const FString& MiniGameDataAssetName) {
}

void UGGCustomCheatManager::UnlockGoatGear(const FString& GearID) {
}

void UGGCustomCheatManager::UnlockAllVanillaTestGoatGear() {
}

void UGGCustomCheatManager::UnlockAllVanillaGoatGear() {
}

void UGGCustomCheatManager::UnlockAllVanillaAchievements() {
}

void UGGCustomCheatManager::UnlockAllTestGoatGearForPlugin(const FString& PluginName) {
}

void UGGCustomCheatManager::UnlockAllTestGoatGear() {
}

void UGGCustomCheatManager::UnlockAllMiniGames() {
}

void UGGCustomCheatManager::UnlockAllInstinctPacks() {
}

void UGGCustomCheatManager::UnlockAllGoatGearForPlugin(const FString& PluginName) {
}

void UGGCustomCheatManager::UnlockAllGoatGear() {
}

void UGGCustomCheatManager::UnlockAchievementForAll(const FString& AchievementID) {
}

void UGGCustomCheatManager::UnlockAchievement(const FString& AchievementID) {
}

void UGGCustomCheatManager::UnEquipGoatGear(const FString& GearID) {
}

void UGGCustomCheatManager::TurnOnSun() {
}

void UGGCustomCheatManager::TurnOffSun() {
}

void UGGCustomCheatManager::TriggerEnsure() {
}

void UGGCustomCheatManager::TravelTo_Island() {
}

void UGGCustomCheatManager::TravelTo_ClosedRoom() {
}

void UGGCustomCheatManager::TravelTo_Boss() {
}

void UGGCustomCheatManager::TravelTo_BasicGoat() {
}

void UGGCustomCheatManager::ToggleLocomotionDebug() {
}

void UGGCustomCheatManager::ToggleGoatNavInvoker() {
}

void UGGCustomCheatManager::ToggleDebugLanguage() {
}

void UGGCustomCheatManager::TestRPCBug(int32 TestMode) {
}

void UGGCustomCheatManager::TeleportToMicroEventActor(int32 Index) {
}

void UGGCustomCheatManager::TeleportAndCompleteAllQuests() {
}

void UGGCustomCheatManager::SyncAllTowers() {
}

void UGGCustomCheatManager::StartPSOSequence() {
}

void UGGCustomCheatManager::StartMobileProfile(const FString& Area, int32 NumFrames, int32 WarmUp, int32 StartProfilingIn) {
}

void UGGCustomCheatManager::StartMiniGame(const FString& MiniGameDataAssetName) {
}

void UGGCustomCheatManager::SpreadStatusToSelf(int32 Status) {
}

void UGGCustomCheatManager::SpreadStatusToSelected(int32 Status) {
}

void UGGCustomCheatManager::SpreadStatus(float Radius, int32 Status) {
}

void UGGCustomCheatManager::SplitScreenStop() {
}

void UGGCustomCheatManager::SplitScreenAddPlayer() {
}

void UGGCustomCheatManager::SpendTokens(int32 Amount) {
}

void UGGCustomCheatManager::SpawnNPC(const FString& NPCName) {
}

void UGGCustomCheatManager::SpawnCars(int32 Index) {
}

void UGGCustomCheatManager::SpawnCar() {
}

void UGGCustomCheatManager::SpawnBike() {
}

void UGGCustomCheatManager::SkipIntro() {
}

void UGGCustomCheatManager::ShowHUDGG() {
}

void UGGCustomCheatManager::SetToggleSprint(bool bShouldUseToggle) {
}

void UGGCustomCheatManager::SetSelectedScale(float Scale) {
}

void UGGCustomCheatManager::SetMood(float Radius, const FString& Mood) {
}

void UGGCustomCheatManager::SetGFurVisibility(bool bNewVisibility) {
}

void UGGCustomCheatManager::SetFlippedSprint(bool bShouldUseFlipped) {
}

void UGGCustomCheatManager::SetDeviceProfile(const FString& DeviceProfileName) const {
}

void UGGCustomCheatManager::SetAllPActorsNetDormant() {
}

void UGGCustomCheatManager::SetAllPActorsNetAwake() {
}

void UGGCustomCheatManager::ServerTestRPCBug_Implementation(AGGGoat* CalledFromGoat, int32 TestMode) {
}

void UGGCustomCheatManager::ServerTeleportAndCompleteAllQuests_Implementation(APlayerController* PC, const TArray<TScriptInterface<IGGRadarInterface>>& Items) {
}

void UGGCustomCheatManager::ServerStopMiniGame_Implementation(AGGPlayerController* CalledFromController, const FString& GameOutcome) {
}

void UGGCustomCheatManager::ServerStartMiniGame_Implementation(AGGPlayerController* CalledFromController, const FString& MiniGameDataAssetName, bool bForceStart) {
}

void UGGCustomCheatManager::ServerSpawnCars_Implementation(APawn* CalledFromPawn, int32 Index) {
}
bool UGGCustomCheatManager::ServerSpawnCars_Validate(APawn* CalledFromPawn, int32 Index) {
    return true;
}

void UGGCustomCheatManager::ServerSpawnCar_Implementation(AGGGoat* CalledFromGoat) {
}

void UGGCustomCheatManager::ServerSpawnBike_Implementation(AGGGoat* CalledFromGoat) {
}

void UGGCustomCheatManager::ServerSetMood_Implementation(float Radius, const FString& Mood) {
}
bool UGGCustomCheatManager::ServerSetMood_Validate(float Radius, const FString& Mood) {
    return true;
}

void UGGCustomCheatManager::ServerPoolNpcs_Implementation(APawn* CalledFromPawn) {
}

void UGGCustomCheatManager::ServerPoolCivilians_Implementation(APawn* CalledFromPawn) {
}
bool UGGCustomCheatManager::ServerPoolCivilians_Validate(APawn* CalledFromPawn) {
    return true;
}

void UGGCustomCheatManager::ServerPoolAnimals_Implementation(APawn* CalledFromPawn) {
}

void UGGCustomCheatManager::ServerLevelTeleport_Implementation(APawn* CalledFromPawn, int32 Index) {
}
bool UGGCustomCheatManager::ServerLevelTeleport_Validate(APawn* CalledFromPawn, int32 Index) {
    return true;
}

void UGGCustomCheatManager::ServerGoatGodMode_Implementation(APawn* CalledFromPawn) {
}
bool UGGCustomCheatManager::ServerGoatGodMode_Validate(APawn* CalledFromPawn) {
    return true;
}

void UGGCustomCheatManager::ServerDestroyStaticMeshes_Implementation() {
}
bool UGGCustomCheatManager::ServerDestroyStaticMeshes_Validate() {
    return true;
}

void UGGCustomCheatManager::ServerDestroyClassContaining_Implementation(const FString& classType) {
}
bool UGGCustomCheatManager::ServerDestroyClassContaining_Validate(const FString& classType) {
    return true;
}

void UGGCustomCheatManager::ServerDestroyActorsWithComponent_Implementation(const FString& classType) {
}
bool UGGCustomCheatManager::ServerDestroyActorsWithComponent_Validate(const FString& classType) {
    return true;
}

void UGGCustomCheatManager::ServerCompleteQuest_Implementation(APlayerController* PC, const FString& QuestID) {
}
bool UGGCustomCheatManager::ServerCompleteQuest_Validate(APlayerController* PC, const FString& QuestID) {
    return true;
}

void UGGCustomCheatManager::ServerCompleteAllQuests_Implementation(APlayerController* PC) {
}

void UGGCustomCheatManager::ServerClearGear_Implementation(APawn* CalledFromPawn) {
}
bool UGGCustomCheatManager::ServerClearGear_Validate(APawn* CalledFromPawn) {
    return true;
}

void UGGCustomCheatManager::ServerAreaDamage_Implementation(APawn* CalledFromPawn, float Range, float Power) {
}
bool UGGCustomCheatManager::ServerAreaDamage_Validate(APawn* CalledFromPawn, float Range, float Power) {
    return true;
}

void UGGCustomCheatManager::SendPSOFile() {
}

void UGGCustomCheatManager::SelectiveCheatsTick(float DeltaTime) {
}

void UGGCustomCheatManager::RespawnPlayer() {
}

void UGGCustomCheatManager::ResetWorldSave() {
}

void UGGCustomCheatManager::ResetQuest(const FString& QuestID) {
}

void UGGCustomCheatManager::ResetPlayerQuestProgress() {
}

void UGGCustomCheatManager::ResetPlayerColor() {
}

void UGGCustomCheatManager::ResetIgnoreInput() {
}

void UGGCustomCheatManager::ResetGoatProgression() {
}

void UGGCustomCheatManager::RequestQuickCommandsMenu() {
}

void UGGCustomCheatManager::RequestEventDebugMenu() {
}

void UGGCustomCheatManager::RequestCheatMenuGamepad() {
}

void UGGCustomCheatManager::RequestCheatMenu() {
}

void UGGCustomCheatManager::ReportQuestStepNextClosest(bool Complete) {
}

void UGGCustomCheatManager::ReportQuestStep(const FString& QuestID, const FString& StepID, bool Complete) {
}

void UGGCustomCheatManager::ReportQuestProgressClosest(int32 Progress) {
}

void UGGCustomCheatManager::ReportQuestProgress(const FString& QuestID, int32 Progress) {
}

void UGGCustomCheatManager::RemoveTutorials() {
}

void UGGCustomCheatManager::RemoveLoadingScreen() {
}

void UGGCustomCheatManager::RebuildAllNavMesh() {
}

void UGGCustomCheatManager::PrintStringTableEntry(const FString& TableId, const FString& TableKey) {
}

void UGGCustomCheatManager::PrintFinishedDialogueBranches() {
}

void UGGCustomCheatManager::PrintFactsDatabase() {
}

void UGGCustomCheatManager::PrintCompletedEvents() {
}

void UGGCustomCheatManager::PrintChaos() {
}

void UGGCustomCheatManager::PrintAllCCDComps() {
}

void UGGCustomCheatManager::PoolNpcs() {
}

void UGGCustomCheatManager::PoolCivilians() {
}

void UGGCustomCheatManager::PoolAnimals() {
}

void UGGCustomCheatManager::OnLoadingScreenRemoved() {
}

void UGGCustomCheatManager::NextProfileCamera() {
}

void UGGCustomCheatManager::LogInputBindings() {
}

void UGGCustomCheatManager::ListAllMicroEventActors() {
}

void UGGCustomCheatManager::ListAllActiveWidgets() {
}

void UGGCustomCheatManager::LevelTeleport(APawn* CalledFromPawn, int32 Index) {
}

void UGGCustomCheatManager::LeftMouseDown() {
}

void UGGCustomCheatManager::ImportProgression() {
}

void UGGCustomCheatManager::GoatGodMode() {
}

void UGGCustomCheatManager::GoatBugit(const FString& Desc) {
}

void UGGCustomCheatManager::GGOnline_StartLevelOffline() {
}

void UGGCustomCheatManager::GGOnline_SetMultiplayerLocked(bool bNewLocked) {
}

void UGGCustomCheatManager::GGOnline_SendChatMessage(const FString& Message) {
}

void UGGCustomCheatManager::GGOnline_SearchForLobbiesWithJoinCode(const FString& JoinCode) {
}

void UGGCustomCheatManager::GGOnline_SearchForLobbies() {
}

void UGGCustomCheatManager::GGOnline_RejectAllLobbyInvites() {
}

void UGGCustomCheatManager::GGOnline_ReadFriendList() {
}

void UGGCustomCheatManager::GGOnline_QueryReceipts() {
}

void UGGCustomCheatManager::GGOnline_QueryOffers() {
}

void UGGCustomCheatManager::GGOnline_QueryAchievements() {
}

void UGGCustomCheatManager::GGOnline_PrintJoinCode() {
}

void UGGCustomCheatManager::GGOnline_NewLobby() {
}

void UGGCustomCheatManager::GGOnline_MakeWorldListen() {
}

void UGGCustomCheatManager::GGOnline_LogoutAndForget() {
}

void UGGCustomCheatManager::GGOnline_Logout() {
}

void UGGCustomCheatManager::GGOnline_LoginAndConnectAccount() {
}

void UGGCustomCheatManager::GGOnline_LobbyStartLevel() {
}

void UGGCustomCheatManager::GGOnline_LeaveLobby() {
}

void UGGCustomCheatManager::GGOnline_JoinLobbySearchResult() {
}

void UGGCustomCheatManager::GGOnline_JoinLobbyJoinCode(const FString& JoinCode) {
}

void UGGCustomCheatManager::GGOnline_JoinLobby(const FString& LobbyId) {
}

void UGGCustomCheatManager::GGOnline_DeveloperLoginCustom(const FString& CredentialsName) {
}

void UGGCustomCheatManager::GGOnline_DeveloperLogin_Test4() {
}

void UGGCustomCheatManager::GGOnline_DeveloperLogin_Test3() {
}

void UGGCustomCheatManager::GGOnline_DeveloperLogin_Test2() {
}

void UGGCustomCheatManager::GGOnline_DeveloperLogin_Test1() {
}

void UGGCustomCheatManager::GGOnline_Checkout() {
}

void UGGCustomCheatManager::GGOnline_BrowseURL(const FString& URL) {
}

void UGGCustomCheatManager::GGOnline_AddDummyLobby(bool bOwner) {
}

void UGGCustomCheatManager::GGOnline_AddDummyFriends(int32 Amount) {
}

void UGGCustomCheatManager::ForceStopMinigame(const FString& GameOutcome) {
}

void UGGCustomCheatManager::ForceStartMiniGame(const FString& MiniGameDataAssetName) {
}

void UGGCustomCheatManager::ForceNonPrimaryPlayerMinigameAccept() {
}

void UGGCustomCheatManager::FlushSave() {
}

void UGGCustomCheatManager::FixSettingsSaveFiles() {
}

UGGPlayerGameDataAsset* UGGCustomCheatManager::FindPlayerGameDataAsset(const FString& DataAssetName) {
    return NULL;
}

void UGGCustomCheatManager::FindDuplicateQuestIDs() {
}

void UGGCustomCheatManager::ExportProgression() {
}

void UGGCustomCheatManager::EquipNPCTestAltGoat() {
}

void UGGCustomCheatManager::EquipGoatGear(const FString& GearID) {
}

void UGGCustomCheatManager::DumpAllNetActiveObjects() {
}

void UGGCustomCheatManager::DumpAllCullDistances() {
}

void UGGCustomCheatManager::DumpActiveGPUParticles() {
}

void UGGCustomCheatManager::DLC_QueryReceipts() {
}

void UGGCustomCheatManager::DisableStaticMeshPostLoad() {
}

void UGGCustomCheatManager::DestroyStaticMeshes() {
}

void UGGCustomCheatManager::DestroySelectedActor() {
}

void UGGCustomCheatManager::DestroyClassContaining(const FString& classType) {
}

void UGGCustomCheatManager::DestroyActorsWithComponent(const FString& classType) {
}

void UGGCustomCheatManager::DebugEvent(const FString& EventID) {
}

void UGGCustomCheatManager::CrashGame() {
}

void UGGCustomCheatManager::CompleteQuest(const FString& QuestID) {
}

void UGGCustomCheatManager::CompleteAllQuests() {
}

void UGGCustomCheatManager::ClearStatusEffect() {
}

void UGGCustomCheatManager::ClearMiniGameSaveData() {
}

void UGGCustomCheatManager::ClearGear() {
}

void UGGCustomCheatManager::CG() {
}

void UGGCustomCheatManager::C() {
}

void UGGCustomCheatManager::AreaDamage(float Range, float Power) {
}

void UGGCustomCheatManager::AddTokens(int32 Amount) {
}

void UGGCustomCheatManager::AddSpawnCarsAutocompletion(TArray<FAutoCompleteCommand>& AutoCompleteList) {
}

void UGGCustomCheatManager::AddChaos(int32 Amount) {
}


