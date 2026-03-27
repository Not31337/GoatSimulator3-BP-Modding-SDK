#include "GGDialogueInstance.h"
#include "Net/UnrealNetwork.h"

UGGDialogueInstance::UGGDialogueInstance() {
    this->DataAsset = NULL;
    this->InteractingPlayer = NULL;
}

void UGGDialogueInstance::UpdateHiddenState(const FGameplayTag& InFact, float InValue) {
}


UGGDialogueInstance* UGGDialogueInstance::StartDialogueWith(AActor* WithActor, UGGDialogueDataAsset* Dialogue, AGGPlayerController* InPlayer) {
    return NULL;
}

bool UGGDialogueInstance::StartDialogue(AGGPlayerController* InPlayer) {
    return false;
}

void UGGDialogueInstance::RestartDialogue(AGGPlayerController* InPlayer) {
}

void UGGDialogueInstance::OnRep_CurrentLine() {
}

bool UGGDialogueInstance::IsValidDialogue() const {
    return false;
}

bool UGGDialogueInstance::IsLastDialogueLine_Implementation(FGGDialogueLineIndex LineIndex) const {
    return false;
}

bool UGGDialogueInstance::IsDialogueHidden() const {
    return false;
}

bool UGGDialogueInstance::IsDialogueFinished() const {
    return false;
}

bool UGGDialogueInstance::IsDialogueActive() const {
    return false;
}

bool UGGDialogueInstance::IsCurrentLinePlaying() const {
    return false;
}

bool UGGDialogueInstance::IsActiveDialogueLineLastOne() const {
    return false;
}

EGGDialogueInteractResponse UGGDialogueInstance::InteractWithDialogue(AGGPlayerController* InPlayer) {
    return EGGDialogueInteractResponse::Started;
}

FGGDialogueLineIndex UGGDialogueInstance::GetNextLineIndex_Implementation(FGGDialogueLineIndex InCurrentLineIndex) const {
    return FGGDialogueLineIndex{};
}

FGGDialogueLine UGGDialogueInstance::GetNextLine_Implementation(FGGDialogueLineIndex InCurrentLineIndex) const {
    return FGGDialogueLine{};
}

FGGDialogueLineIndex UGGDialogueInstance::GetLineIndex(const FGGDialogueLine& InLine) const {
    return FGGDialogueLineIndex{};
}

FText UGGDialogueInstance::GetDialogueParticipantsName() const {
    return FText::GetEmpty();
}

FGGDialogueLine UGGDialogueInstance::GetDialogueLine_Implementation(FGGDialogueLineIndex LineIndex) const {
    return FGGDialogueLine{};
}

UGGDialogueDataAsset* UGGDialogueInstance::GetDataAsset() const {
    return NULL;
}

FGGDialogueLineIndex UGGDialogueInstance::GetCurrentDialogueLineIndex() const {
    return FGGDialogueLineIndex{};
}

FGGDialogueLine UGGDialogueInstance::GetCurrentDialogueLine() const {
    return FGGDialogueLine{};
}

int32 UGGDialogueInstance::FindActiveBranch_Implementation() const {
    return 0;
}

void UGGDialogueInstance::EndDialogue(AGGPlayerController* InPlayer) {
}

void UGGDialogueInstance::DialogueStarted_Implementation() {
}

void UGGDialogueInstance::DialogueRestarted_Implementation() {
}


void UGGDialogueInstance::DialogueEnded_Implementation() {
}

void UGGDialogueInstance::DialogueCanceled_Implementation() {
}

void UGGDialogueInstance::CancelDialogue(AGGPlayerController* InPlayer) {
}

bool UGGDialogueInstance::CanBeInteractWith_Implementation(AGGPlayerController* InPlayer) const {
    return false;
}

bool UGGDialogueInstance::CanAdvanceDialogueWithInteraction_Implementation(AGGPlayerController* InPlayer, FGGDialogueLineIndex InCurrentLineIndex, float TimeStampLineStarted) const {
    return false;
}

bool UGGDialogueInstance::CanAdvanceDialogue_Implementation(FGGDialogueLineIndex InCurrentLineIndex, float TimeStampLineStarted) const {
    return false;
}

bool UGGDialogueInstance::AdvanceDialogue(AGGPlayerController* InPlayer) {
    return false;
}

void UGGDialogueInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGDialogueInstance, CurrentLineRep);
}


