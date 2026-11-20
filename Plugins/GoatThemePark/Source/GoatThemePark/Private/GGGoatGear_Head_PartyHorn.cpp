#include "GGGoatGear_Head_PartyHorn.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Head_PartyHorn::UGGGoatGear_Head_PartyHorn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PartyHornAnimMontage = NULL;
    this->DefaultAnimSectionName = TEXT("Default");
    this->StartAnimSectionName = TEXT("Start");
    this->LoopAnimSectionName = TEXT("Loop");
    this->EndAnimSectionName = TEXT("End");
    this->UnwrappingSound = NULL;
    this->BlowingSound = NULL;
    this->WrappingSound = NULL;
    this->NotifyNPCClappingTimeRate = 2.00f;
    this->NotifyNPCClappingDuration = 20.00f;
    this->NotifyNPCAngryTimeRate = 2.00f;
    this->NotifyNPCRadius = 500.00f;
    this->PartyHornAudioComponent = NULL;
    this->CurrentState = EPartyHornState::Default;
}

void UGGGoatGear_Head_PartyHorn::StopNPCReactions() {
}

void UGGGoatGear_Head_PartyHorn::StartNPCReactions() {
}

void UGGGoatGear_Head_PartyHorn::SetNPCAngryWithGoat() {
}

void UGGGoatGear_Head_PartyHorn::SetCurrentState(EPartyHornState NewState) {
}

void UGGGoatGear_Head_PartyHorn::ServerSetCurrentState_Implementation(EPartyHornState NewState) {
}

void UGGGoatGear_Head_PartyHorn::OnRep_CurrentState() {
}

void UGGGoatGear_Head_PartyHorn::NotifyNPCInRadius(bool bSetAngry) {
}

void UGGGoatGear_Head_PartyHorn::MulticastInstinctTrigger_Implementation(AGGGoat* GoatOwner) {
}

void UGGGoatGear_Head_PartyHorn::HandleCurrentStateChanged() {
}

EPartyHornState UGGGoatGear_Head_PartyHorn::GetCurrentState() const {
    return EPartyHornState::Default;
}

void UGGGoatGear_Head_PartyHorn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Head_PartyHorn, CurrentState);
}


