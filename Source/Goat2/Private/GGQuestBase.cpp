#include "GGQuestBase.h"
#include "Net/UnrealNetwork.h"

AGGQuestBase::AGGQuestBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bActiveByDefault = true;
    this->QuestReplicationMode = EQuestReplication::Local;
    this->QuestID = TEXT("not_set");
    this->QuestProgressionMode = EQuestProgression::Tiers;
    this->QuestProgressTextFormat = FText::FromString(TEXT("{Progress} / {Target}"));
    this->QuestRewardSplashDelay = 0.00f;
    this->QuestSaveMethod = ESaveGameType::Player;
    this->bSecretProgression = false;
    this->bStepsAsTierInHUD = false;
    this->QuestProgressTiers.AddDefaulted(1);
    this->bShowOnly0To1Progress = false;
    this->bSavePartialCompletion = true;
    this->bSaveProgressionEveryUpdate = false;
    this->ShowQuestIDAsUnread = false;
    this->bDrawDebugInfo = false;
    this->bDisableProgressSaving = false;
    this->bDisableProgressLoading = false;
    this->bPrintErrorsOnScreen = false;
    this->bWarningsAsErrors = false;
    this->QuestManager = NULL;
    this->QuestProgress = 0;
    this->bSharedProgressSynced = false;
    this->bCompleted = false;
    this->bCompletedThisPlaySession = false;
    this->bCompletedBeforeJoining = false;
    this->bProgressionLoaded = false;
    this->LastProgressUpdate = 0;
    this->bInitialized = false;
    this->bActive = false;
    this->bDiscovered = false;
    this->bPreviouslyDiscovered = false;
}

bool AGGQuestBase::UpdateQuestStepCompletion(const FString& StepID, bool bStepCompleted) {
    return false;
}

FString AGGQuestBase::TagIdAsStringId(const FGameplayTag& TagIdentifier) {
    return TEXT("");
}

void AGGQuestBase::SetReplicationParameters(bool bShouldReplicate, float ReplicationInterval) {
}

void AGGQuestBase::SetProgress(int32 Value, AGGPlayerState* EventInstigator) {
}

void AGGQuestBase::SetMilestoneProgress(int32 Value, bool bInitializeOnly) {
}

void AGGQuestBase::ResetQuest() {
}

void AGGQuestBase::ReportProgress(int32 Value, AGGPlayerState* EventInstigator) {
}

bool AGGQuestBase::QuestWasCompletedThisPlaySession() {
    return false;
}

void AGGQuestBase::OnRep_SharedProgress() {
}




void AGGQuestBase::OnOtherQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState) {
}


void AGGQuestBase::MulticastSetProgress_Implementation(int32 Progress, AGGPlayerState* EventInstigator) {
}

void AGGQuestBase::MulticastDiscoverQuest_Implementation(const TArray<AGGPlayerState*>& PlayersInDiscoveryRange) {
}

void AGGQuestBase::MulticastDeactivateQuest_Implementation(bool bWasCompleted) {
}

void AGGQuestBase::MulticastCompleteStep_Implementation(const FString& StepID, AGGPlayerState* EventInstigator, bool Complete) {
}

void AGGQuestBase::MulticastCompleteQuest_Implementation(AGGPlayerState* EventInstigator) {
}

void AGGQuestBase::MulticastActivateQuest_Implementation() {
}

void AGGQuestBase::LogQuestWarning(const FString& InFunction, const FString& InMessage) const {
}

void AGGQuestBase::LogQuestEvent(const FString& InFunction, const FString& InMessage, EQuestDebugType Verbosity) const {
}

void AGGQuestBase::LogQuestError(const FString& InFunction, const FString& InMessage) const {
}

bool AGGQuestBase::IsTierCompleted(FQuestTier Tier) const {
    return false;
}

bool AGGQuestBase::IsQuestUserVisible() {
    return false;
}

bool AGGQuestBase::IsQuestStepVisible(const FString& StepID) {
    return false;
}

bool AGGQuestBase::IsQuestSecret(bool bSecretIfCompleted) const {
    return false;
}

bool AGGQuestBase::IsInitializedFully() const {
    return false;
}

bool AGGQuestBase::IsInitialized() {
    return false;
}

bool AGGQuestBase::IsCompleted() const {
    return false;
}

bool AGGQuestBase::IsActive() {
    return false;
}

bool AGGQuestBase::HasLoadedStateFromServer() {
    return false;
}

int32 AGGQuestBase::GetTargetProgressForUI() const {
    return 0;
}

FText AGGQuestBase::GetQuestTitle() {
    return FText::GetEmpty();
}

FText AGGQuestBase::GetQuestTierDescription(FQuestTier Tier) {
    return FText::GetEmpty();
}

TArray<FQuestStepTier> AGGQuestBase::GetQuestSteps() {
    return TArray<FQuestStepTier>();
}

float AGGQuestBase::GetQuestRewardSplashDelay_Implementation() {
    return 0.0f;
}

FText AGGQuestBase::GetQuestProgressText() {
    return FText::GetEmpty();
}

FText AGGQuestBase::GetQuestDescription() {
    return FText::GetEmpty();
}

FText AGGQuestBase::GetQuestCompletionSplashTitle() {
    return FText::GetEmpty();
}

FText AGGQuestBase::GetQuestCompletionSplashBody() {
    return FText::GetEmpty();
}

int32 AGGQuestBase::GetProgressForUI() const {
    return 0;
}

int32 AGGQuestBase::GetProgress(bool& ReachedMaximum) const {
    return 0;
}

FQuestTier AGGQuestBase::GetPreviousQuestTier() {
    return FQuestTier{};
}

int32 AGGQuestBase::GetNumberOfSteps() const {
    return 0;
}

int32 AGGQuestBase::GetNumberOfQuestTiers() {
    return 0;
}

int32 AGGQuestBase::GetNumberOfCompletedSteps() {
    return 0;
}

FQuestStep AGGQuestBase::GetNextUncompletedStep() {
    return FQuestStep{};
}

int32 AGGQuestBase::GetMaximumTargetProgress() const {
    return 0;
}

FQuestTier AGGQuestBase::GetLastQuestTier() const {
    return FQuestTier{};
}

int32 AGGQuestBase::GetCurrentQuestTierIndex() {
    return 0;
}

FQuestTier AGGQuestBase::GetCurrentQuestTier() const {
    return FQuestTier{};
}

bool AGGQuestBase::GetCompletedOrderIndexForStep(int32 StepTier, const FString& StepID, int32& OutCompletedOrderIndex) const {
    return false;
}

void AGGQuestBase::DiscoverQuest(AGGPlayerState* EventInstigator) {
}

void AGGQuestBase::DecreaseProgress(int32 Value, AGGPlayerState* EventInstigator) {
}

void AGGQuestBase::DeactivateQuest(bool bWasCompleted) {
}

void AGGQuestBase::CompleteStepHUD(const FString& StepID, bool bComplete) {
}

void AGGQuestBase::CompleteStep(const FString& StepID, AGGPlayerState* EventInstigator, bool Complete, bool bDelayCompletionInHUD) {
}

void AGGQuestBase::CompleteQuest(AGGPlayerState* EventInstigator) {
}

void AGGQuestBase::ClearQuestProgressionSaveDataDebug() {
}

bool AGGQuestBase::CanQuestBeCompleted() {
    return false;
}

bool AGGQuestBase::AreAllStepsInTierCompleted(const FQuestStepTier Tier) {
    return false;
}

void AGGQuestBase::ActivateQuest() {
}

void AGGQuestBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGQuestBase, SharedProgress);
}


