#include "GGPlayerController.h"
#include "GGChaosCounterListener.h"
#include "GGControllerRumbleComponent.h"
#include "GGIntroComponent.h"
#include "GGLoadingScreenComponent.h"
#include "GGMenuComponent.h"
#include "GGNotificationDispatcher.h"
#include "GGObjectControlInputComponent.h"
#include "GGPlayerCameraManager.h"
#include "GGPlayerDialogueComponent.h"
#include "GGRadarComponent.h"
#include "GGTeleportationComponent.h"
#include "GGTutorialComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AGGPlayerController::AGGPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = AGGPlayerCameraManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->PlayerDialogueComponent = CreateDefaultSubobject<UGGPlayerDialogueComponent>(TEXT("Player Dialogue"));
    this->BaseTurnRate = 2.00f;
    this->BaseLookUpRate = 2.00f;
    this->ToggleSprintGracePeriod = 0.75f;
    this->RagdollAfterStandUpDelay = 0.75f;
    this->GamepadInputThresholdForSprinting = 0.80f;
    this->MobileInputThresholdForSprinting = 1.05f;
    this->GGPlayerCameraManager = NULL;
    this->bForceSprint = false;
    this->bUsingGamepad = false;
    this->CustomCheatManager_Vanilla = NULL;
    this->RumbleComponentClass = UGGControllerRumbleComponent::StaticClass();
    this->RumbleComponent = NULL;
    this->WaterLaunchDelay = 1.00f;
    this->SlowMotionSoundMix = NULL;
    this->ActivateSlomo = NULL;
    this->DeativateSlomo = NULL;
    this->bDisableMotionBlurDuringSlowMo = true;
    this->ObjectControlInputComponent = CreateDefaultSubobject<UGGObjectControlInputComponent>(TEXT("Object Control Input Component"));
    this->LastControlledObject = NULL;
    this->LoadingScreenComponent = CreateDefaultSubobject<UGGLoadingScreenComponent>(TEXT("Loading Screen Component"));
    this->TeleportationComponent = CreateDefaultSubobject<UGGTeleportationComponent>(TEXT("Teleportation Component"));
    this->TowerBeingSynced = NULL;
    this->GoalBeingUnlocked = NULL;
    this->HijackTextFormat = FText::FromString(TEXT("<YELLOW>Hijacked</> {0}"));
    this->TargetedInteractable = NULL;
    this->InteractCheckInterval = 0.20f;
    this->TrackballDeceleration = 1.00f;
    this->TrackballSmoothing = 14.00f;
    this->TrackballSmoothingThreshold = 2.00f;
    this->TouchHorizontalTurnRate = 1.00f;
    this->TouchVerticalTurnRate = 1.00f;
    this->MobileHUDWidgetInstance = NULL;
    this->MobileDistanceWarningInstance = NULL;
    this->ActiveMenuWidget = NULL;
    this->HUDWidgetInstance = NULL;
    this->MenuSoundMix = NULL;
    this->MenuComponent = CreateDefaultSubobject<UGGMenuComponent>(TEXT("Menu Component"));
    this->NotificationDispatcher = CreateDefaultSubobject<UGGNotificationDispatcher>(TEXT("Notification Dispatcher"));
    this->RadarComponent = CreateDefaultSubobject<UGGRadarComponent>(TEXT("Radar Component"));
    this->TutorialComponent = CreateDefaultSubobject<UGGTutorialComponent>(TEXT("Tutorial Component"));
    this->IntroComponent = CreateDefaultSubobject<UGGIntroComponent>(TEXT("Intro Component"));
    this->PlayerSubtitleComponent = NULL;
    this->ChaosCounterListener = CreateDefaultSubobject<UGGChaosCounterListener>(TEXT("Chaos Counter Listener"));
    this->NearestQuestCheckInterval = 2.50f;
    this->UpdateInstinctsCheckInterval = 5.00f;
    this->AmountOfActiveInstinctsToShow = 3;
    this->PlaytestOverlayWidgetClass = NULL;
    this->PlaytestOverlayWidget = NULL;
    this->DemoOverlayWidgetClass = NULL;
    this->DemoOverlayWidget = NULL;
    this->DemoEndplateWidget = NULL;
    this->ControlledGoat = NULL;
    this->NearbyGrindSpline = NULL;
    this->bHoldingHeadbutt = false;
    this->HeadbuttDownTimestamp = 0.00f;
    this->bHoldingWalk = false;
    this->CachedNearestQuest = NULL;
}

void AGGPlayerController::WaterMixVolChange(bool InWater, USoundMix* SoundMix) {
}

void AGGPlayerController::VehicleHornUp() {
}

void AGGPlayerController::VehicleHornDown() {
}

void AGGPlayerController::VehicleHandbrakeUp() {
}

void AGGPlayerController::VehicleHandbrakeDown() {
}

void AGGPlayerController::VehicleBoostUp() {
}

void AGGPlayerController::VehicleBoostDown() {
}

void AGGPlayerController::UpdateTutorial(const FDataTableRowHandle& TutorialRowHandle) {
}

void AGGPlayerController::UpdateTargetInteractableHint(UObject* TargetInteractable, bool InteractableChanged, bool bForce) {
}

void AGGPlayerController::UpdateTargetInteractable(bool bBypassInterval) {
}

void AGGPlayerController::UpdateNearestQuest() {
}

void AGGPlayerController::UpdateInstincts() {
}

void AGGPlayerController::UnlockAndEquipGear(AGGPlayerController* PlayerController, UGGGoatGearInfoDataAsset* Gear, FGameplayTag UnlockContext, EGearEquipContext EquipContext, bool bEquipIfAlreadyUnlocked, bool bGiveAbility, bool bCancelPendingGearInSameSlot, UGGGoatGearStyleDataAsset* StyleData) {
}

void AGGPlayerController::ToggleRagdoll() {
}

void AGGPlayerController::ToggleEmotes() {
}

bool AGGPlayerController::StartControllingObject(UObject* Object, AActor* ViewTarget, FViewTargetTransitionParams ViewTransition) {
    return false;
}

bool AGGPlayerController::SpawnedIntoThisWorld(const UObject* WorldContextObject) const {
    return false;
}

void AGGPlayerController::SoundMixChange(bool InWater, USoundMix* SoundMix) {
}


void AGGPlayerController::SlowMotion() {
}

void AGGPlayerController::SkipIntro_Implementation() {
}

void AGGPlayerController::ShowSplash_Implementation(const FText& SplashText, const FText& SplashDescription) {
}

void AGGPlayerController::ShowDemoEndplate_Implementation() {
}

bool AGGPlayerController::ShouldTabBeDisabled(FGameplayTag TabTag) {
    return false;
}

void AGGPlayerController::SetTargetInteractable(UObject* TargetInteractable) {
}

void AGGPlayerController::SetPlayerName_Implementation(const FString& NewName) {
}
bool AGGPlayerController::SetPlayerName_Validate(const FString& NewName) {
    return true;
}

void AGGPlayerController::SetForceSprint(bool ForceSprint) {
}

void AGGPlayerController::SetForcedMovementInput(FVector ForcedMovement) {
}

void AGGPlayerController::SetAutoManageActiveCameraTarget(bool bAutoManageCamera) {
}

void AGGPlayerController::ServerVehicleAbilityReleased_Implementation(uint8 AbilityIndex) {
}
bool AGGPlayerController::ServerVehicleAbilityReleased_Validate(uint8 AbilityIndex) {
    return true;
}

void AGGPlayerController::ServerVehicleAbilityPressed_Implementation(uint8 AbilityIndex) {
}
bool AGGPlayerController::ServerVehicleAbilityPressed_Validate(uint8 AbilityIndex) {
    return true;
}

void AGGPlayerController::ServerStartPlayerGameFromStartingPoint_Implementation(AGGPlayerGameStartingPoint* StartingPoint) {
}

void AGGPlayerController::ServerStartPlayerGame_Implementation(UGGPlayerGameDataAsset* MiniGameAsset) {
}

void AGGPlayerController::ServerStartControllingObject_Implementation(UObject* Object, AActor* ViewTarget, FViewTargetTransitionParams ViewTransition) {
}
bool AGGPlayerController::ServerStartControllingObject_Validate(UObject* Object, AActor* ViewTarget, FViewTargetTransitionParams ViewTransition) {
    return true;
}

void AGGPlayerController::ServerSendPlayerGameInviteResponse_Implementation(bool bAccepted) {
}

void AGGPlayerController::ServerSendKarmaAmountToServer_Implementation(int32 KarmaAmount) {
}

void AGGPlayerController::ServerRespawn_Implementation(bool BypassCheck) {
}
bool AGGPlayerController::ServerRespawn_Validate(bool BypassCheck) {
    return true;
}

void AGGPlayerController::ServerResetObjectControl_Implementation(FViewTargetTransitionParams ViewTransition) {
}
bool AGGPlayerController::ServerResetObjectControl_Validate(FViewTargetTransitionParams ViewTransition) {
    return true;
}

void AGGPlayerController::ServerRequestServerTime_Implementation(APlayerController* Requester, float RequestWorldTime) {
}
bool AGGPlayerController::ServerRequestServerTime_Validate(APlayerController* Requester, float RequestWorldTime) {
    return true;
}

void AGGPlayerController::ServerOnMenuEnter_Implementation(FGameplayTag MenuTag) {
}

void AGGPlayerController::ServerLeavePlayerGame_Implementation() {
}

void AGGPlayerController::ServerInteractUp_Implementation(UObject* InteractWith, float HeldFor) {
}

void AGGPlayerController::ServerInteractDown_Implementation(UObject* InteractWith) {
}

void AGGPlayerController::ServerFinishedWatchingSequence_Implementation(FGameplayTag SequenceTag) {
}

void AGGPlayerController::ServerChat_Implementation(const FString& Msg) {
}
bool AGGPlayerController::ServerChat_Validate(const FString& Msg) {
    return true;
}

void AGGPlayerController::ServerCancelPlayerGame_Implementation() {
}

void AGGPlayerController::ServerBaaReleased_Implementation() {
}
bool AGGPlayerController::ServerBaaReleased_Validate() {
    return true;
}

void AGGPlayerController::ServerBaaPressed_Implementation() {
}
bool AGGPlayerController::ServerBaaPressed_Validate() {
    return true;
}

void AGGPlayerController::SavePlayerName(const FString& NewName) {
}

void AGGPlayerController::ResetObjectControl(FViewTargetTransitionParams ViewTransition) {
}

void AGGPlayerController::ResetIntroSubtitleOverride() {
}

bool AGGPlayerController::RequestTabNavigation(FGameplayTag InTag, FMenuNavigationContext Context) {
    return false;
}

bool AGGPlayerController::RequestMenuNavigation(FGameplayTag MenuTag, TEnumAsByte<EMenuRequest::Type> Request, FMenuNavigationContext MenuContext, UUserWidget*& OutWidget) {
    return false;
}

bool AGGPlayerController::RemoveTutorial(const FDataTableRowHandle& TutorialRowHandle, bool bComplete, UObject* TutorialObject, bool bCompleteEvenIfNotActive) {
    return false;
}

void AGGPlayerController::RemoveAreaEnterNotifications() {
}

void AGGPlayerController::ReceivedLogoutMessage_Implementation(APlayerState* LeavingPlayerState) {
}

void AGGPlayerController::ReceivedLoginMessage_Implementation(APlayerState* JoiningPlayerState) {
}

void AGGPlayerController::ReceivedChatMessage_Implementation(APlayerState* SenderPlayerState, const FString& S, FName Type, float MsgLifeTime) {
}

void AGGPlayerController::QuestMenu() {
}

void AGGPlayerController::PS5EnableAdaptiveTriggers(const float FireTriggerThreshold) {
}

void AGGPlayerController::PS5ChangeLightBarColor(const FColor NewLightBarColor) {
}

void AGGPlayerController::PrintCheatManagerNames() {
}

void AGGPlayerController::OverrideIntroSubtitleSetting() {
}

void AGGPlayerController::OptionsMenu() {
}

void AGGPlayerController::OnRep_ControlledGoat() {
}

void AGGPlayerController::OnRep_ClientObjectControl() {
}

void AGGPlayerController::OnRemovedContext(FMenuNavigationContextContainer ContextContainer, AGGPlayerController* PC) {
}

void AGGPlayerController::OnQuestUpdated(AGGQuestBase* Quest, FGameplayTag UpdateTag) {
}

void AGGPlayerController::OnQuestTierCompleted(AGGQuestBase* Quest, const FQuestTier& Tier) {
}

void AGGPlayerController::OnQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState) {
}

void AGGPlayerController::OnPawnRagdolled() {
}

void AGGPlayerController::OnInventoryUnlockedDelegate(UDataAsset* Asset, FGameplayTag Context, AGGPlayerController* OptionalPC) {
}

void AGGPlayerController::OnEndAbility(const FAbilityEndedData& AbilityEndedData) {
}

void AGGPlayerController::OnCameraContextChanged(EPostProcessCameraContext CameraContext, AActor* NewTarget) {
}

void AGGPlayerController::OnAreaExited(AGGGoat* Goat, FGameplayTag AreaTag) {
}

void AGGPlayerController::OnAreaEntered(AGGGoat* Goat, FGameplayTag AreaTag) {
}

void AGGPlayerController::MulticastMobileClientDistanceCheck_Implementation(FVector HostPosition, FRotator HostRotator, bool bIsInVehicle) {
}

void AGGPlayerController::MobileShowInteractUI() {
}

void AGGPlayerController::MobileManageClientHostDistance() {
}

void AGGPlayerController::MobileHideInteractUI() {
}

void AGGPlayerController::MiddleMouseDown() {
}

void AGGPlayerController::MapMenu() {
}

void AGGPlayerController::LickAbilityUp() {
}

void AGGPlayerController::LickAbilityDown() {
}

void AGGPlayerController::LevelTravelFadeOut_Implementation(float FadeDuration, FColor FadeColor) {
}

bool AGGPlayerController::KeyMatchesActionBinding(FKey InKey, FName InAction) const {
    return false;
}

bool AGGPlayerController::IsTutorialCompleted(const FDataTableRowHandle& TutorialRowHandle) {
    return false;
}

bool AGGPlayerController::IsSwitchSplitScreenMainPlayer() {
    return false;
}

bool AGGPlayerController::IsPrimaryPlayerBlueprint() {
    return false;
}

bool AGGPlayerController::IsOverridingAudioListener() const {
    return false;
}

bool AGGPlayerController::IsInIntro() {
    return false;
}

bool AGGPlayerController::IsControllingObject() const {
    return false;
}

void AGGPlayerController::InteractUp() {
}

void AGGPlayerController::InteractDown() {
}

void AGGPlayerController::InitMobileControlsWidget() {
}

void AGGPlayerController::InitHUDWidgets() {
}

void AGGPlayerController::IgnoreMoveInputForDuration(float Duration) {
}

void AGGPlayerController::HeadbuttUp() {
}

void AGGPlayerController::Headbutt() {
}

void AGGPlayerController::GoatBaaUp() {
}

void AGGPlayerController::GoatBaaDown() {
}

FString AGGPlayerController::GetRadarWidgetVisibilityDebugString(FGameplayTag FilterTag) {
    return TEXT("");
}

FInputAxisKeyMapping AGGPlayerController::GetPrimaryKeyMappingForAxis(FName ActionMapping, float Scale, EKeyMappingInputMode InputMode) const {
    return FInputAxisKeyMapping{};
}

FInputActionKeyMapping AGGPlayerController::GetPrimaryKeyMappingForAction(FName ActionMapping, EKeyMappingInputMode InputMode) const {
    return FInputActionKeyMapping{};
}

void AGGPlayerController::GetPlayerViewPointAndRot(FVector& Location, FRotator& Rotation) {
}

float AGGPlayerController::GetPawnVelocity() {
    return 0.0f;
}

FVector2D AGGPlayerController::GetLookingAtDirections() {
    return FVector2D{};
}

int32 AGGPlayerController::GetLocalPlayerID() const {
    return 0;
}

UGGInventory* AGGPlayerController::GetInventory() const {
    return NULL;
}

UGGHUDUserWidgetBase* AGGPlayerController::GetHUDWidgetInstanceCast(TSubclassOf<UGGHUDUserWidgetBase> WidgetClass, ECastResult& Result) {
    return NULL;
}

AGGPlayerState* AGGPlayerController::GetGGPlayerState() const {
    return NULL;
}

UGGLocalPlayer* AGGPlayerController::GetGGLocalPlayer() const {
    return NULL;
}

bool AGGPlayerController::GetForceSprint() const {
    return false;
}

FVector AGGPlayerController::GetForcedMovementInput() const {
    return FVector{};
}

TArray<UGGCustomCheatManager_Base*> AGGPlayerController::GetCustomCheatManagers() {
    return TArray<UGGCustomCheatManager_Base*>();
}

UGGCustomCheatManager* AGGPlayerController::GetCustomCheatManager_Vanilla() {
    return NULL;
}

EKeyMappingInputMode AGGPlayerController::GetCurrentKeyMappingInputMode() const {
    return EKeyMappingInputMode::InputMode_Current;
}

AGGGoat* AGGPlayerController::GetControlledGoat() const {
    return NULL;
}

UUserWidget* AGGPlayerController::GetActiveMenuWidgetCast(TSubclassOf<UUserWidget> WidgetClass, ECastResult& Result) {
    return NULL;
}

float AGGPlayerController::GetAccurateServerTimeDelta() const {
    return 0.0f;
}

float AGGPlayerController::GetAccurateServerTime() const {
    return 0.0f;
}

void AGGPlayerController::GameMenu() {
}

void AGGPlayerController::ForceUpdateTargetInteractableHint() {
}

void AGGPlayerController::FinishedWatchingSequence(FGameplayTag SequenceTag) {
}

void AGGPlayerController::DispatchNotificationToClient_Implementation(FNotification Notification) {
}

void AGGPlayerController::Decline() {
}

bool AGGPlayerController::CreateTutorialWithTutorialObject(const FDataTableRowHandle& TutorialRowHandle, UObject* TutorialObject, AGGTutorial*& OutCreatedTutorial) {
    return false;
}

bool AGGPlayerController::CreateTutorial(const FDataTableRowHandle& TutorialRowHandle, AGGTutorial*& OutCreatedTutorial) {
    return false;
}

void AGGPlayerController::ClientUnlockAndEquipGear_Implementation(UGGGoatGearInfoDataAsset* Gear, FGameplayTag UnlockContext, EGearEquipContext EquipContext, bool bEquipIfAlreadyUnlocked, bool bGiveAbility, bool bCancelPendingGearInSameSlot, UGGGoatGearStyleDataAsset* StyleData) {
}

void AGGPlayerController::ClientUnlockAchievements_Implementation(const TArray<FString>& AchievementIDs) {
}

void AGGPlayerController::ClientTriggerInstinct_Implementation(FGameplayTag InstinctTag) {
}

void AGGPlayerController::ClientSpendTokens_Implementation(int32 TokenAmount, EResourceSpendType SpendType, const FString& SpendActionID, const FString& SpendSourceID) {
}

void AGGPlayerController::ClientResetObjectControl_Implementation(FViewTargetTransitionParams ViewTransition) {
}

void AGGPlayerController::ClientReportServerTime_Implementation(float RequestWorldTime, float TheServerTime) {
}

void AGGPlayerController::ClientRemoveNotification_Implementation(FGameplayTag Tag, const FString& ID, FGameplayTag ContentTag, ENotificationCommand::Type Command, FMenuNavigationContext MenuContext) {
}

void AGGPlayerController::ClientOnQuestDiscoveredNotificationCreated_Implementation(float SplashDuration) {
}

void AGGPlayerController::ClientNotifyPropFound_Implementation(bool bFullScreenSplash, AGGGoat* HiddenGoat, const FText& PropName) {
}

void AGGPlayerController::ClientHideGameTimer_Implementation() {
}

void AGGPlayerController::ClientHideGameHUD_Implementation() {
}

void AGGPlayerController::ClientCreateNotification_Implementation(FNotification Notification, FMenuNavigationContext MenuContext) {
}

void AGGPlayerController::ClientBroadcastHijack_Implementation(AGGVehicle* HijackedVehicle, const FText& PreviousName) {
}

void AGGPlayerController::ClientAcquireTokens_Implementation(int32 TokenAmount, EResourceAcquisitionType AcquisitionType, const FString& AcquisitionActionID, const FString& AcquisitionSourceID) {
}

void AGGPlayerController::ChatEnter() {
}

void AGGPlayerController::Chat(const FString& Msg) {
}

void AGGPlayerController::CharacterStopJumping() {
}

void AGGPlayerController::CharacterStopDiving() {
}

void AGGPlayerController::CharacterJump() {
}

void AGGPlayerController::CharacterDive() {
}

bool AGGPlayerController::CanUseChat() {
    return false;
}

void AGGPlayerController::BP_ClientTriggerInstinct(FGameplayTag InstinctTag) {
}

void AGGPlayerController::BP_ClientRemoveNotification(FGameplayTag Tag, const FString& ID, FGameplayTag ContentTag, TEnumAsByte<ENotificationCommand::Type> Command) {
}

void AGGPlayerController::BP_ClientCreateNotification(FNotification Notification, FMenuNavigationContext MenuContext) {
}

bool AGGPlayerController::ActivateTutorial(const FDataTableRowHandle& TutorialRowHandle) {
    return false;
}

void AGGPlayerController::AchievementsMenu() {
}

void AGGPlayerController::Accept() {
}

void AGGPlayerController::AbilityUp() {
}

void AGGPlayerController::AbilityDown() {
}

void AGGPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPlayerController, ForcedMovementInput);
    DOREPLIFETIME(AGGPlayerController, bForceSprint);
    DOREPLIFETIME(AGGPlayerController, ClientObjectControl);
    DOREPLIFETIME(AGGPlayerController, LocationsAffectingSignificance);
    DOREPLIFETIME(AGGPlayerController, ControlledGoat);
}


