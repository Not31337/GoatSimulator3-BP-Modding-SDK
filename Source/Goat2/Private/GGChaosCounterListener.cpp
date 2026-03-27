#include "GGChaosCounterListener.h"

UGGChaosCounterListener::UGGChaosCounterListener(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChaosCounterMode = EChaosCounterMode::ECM_RecurringAndCooldown;
    this->BaseCooldown = 5.00f;
    this->bDebugPrints = false;
    this->SourceDataTable = NULL;
    this->SpendingSourceDataTable = NULL;
    this->RandomSourceDataTable = NULL;
}

bool UGGChaosCounterListener::SpendChaosFromSourceWithAmount(const FString& SourceID, int32 Amount) {
    return false;
}

bool UGGChaosCounterListener::SpendChaosFromSource(const FString& SourceID, const FString& FallbackID) {
    return false;
}

void UGGChaosCounterListener::OnTokenAmountChanged(int32 Amount, const FString& AcquisitionID, const FString& AcquisitionSource) {
}

void UGGChaosCounterListener::OnQuestTierCompleted(AGGQuestBase* Quest, const FQuestTier& Tier) {
}

void UGGChaosCounterListener::OnQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState) {
}

void UGGChaosCounterListener::OnQuestCollectionMilestoneReached(AGGQuestBase* Quest, const FQuestTier& Milestone) {
}

bool UGGChaosCounterListener::IsRecurringAcquisitionAllowed(const FString& InSource) {
    return false;
}

bool UGGChaosCounterListener::IsCooldownActiveForSource(const FString& InSource) {
    return false;
}

void UGGChaosCounterListener::GiveChaosAwardFromSourceWithAmount(const FString& SourceID, int32 Amount) {
}

void UGGChaosCounterListener::GiveChaosAwardFromSource(const FString& SourceID, const FString& FallbackID) {
}

int32 UGGChaosCounterListener::GetChaosFromEvent(AGGQuestBase* Quest) {
    return 0;
}

int32 UGGChaosCounterListener::GetChaosAwardFromTable(UDataTable* DataTable, FName RowName) {
    return 0;
}

int32 UGGChaosCounterListener::GetChaos() {
    return 0;
}

void UGGChaosCounterListener::ClientTriggerChaos_Implementation(int32 Amount) {
}

void UGGChaosCounterListener::ChaosAmountChangedServer_Implementation(int32 Amount, const FString& AcquisitionSource) {
}
bool UGGChaosCounterListener::ChaosAmountChangedServer_Validate(int32 Amount, const FString& AcquisitionSource) {
    return true;
}


