#include "GGVoiceOverComponent.h"
#include "Net/UnrealNetwork.h"

UGGVoiceOverComponent::UGGVoiceOverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->VoiceAudioComponent = NULL;
    this->OwnerHumanoid = NULL;
    this->bOverrideVoiceLineTags = false;
    this->bOverrideAllVoiceLineTags = false;
}

void UGGVoiceOverComponent::StopCurrentVoiceline() {
}

void UGGVoiceOverComponent::SetVoiceIdentity_BP(FGameplayTag VoiceIdentity) {
}

void UGGVoiceOverComponent::RandomizeVoiceIdentity_BP(TArray<FGameplayTag> OverrideVoiceIdentities) {
}

bool UGGVoiceOverComponent::PlayVoiceOver(FGameplayTag VoiceOverType, bool bReplicate, bool bCanInterruptCurrentLine, bool bCanBeStoppedByDamage) {
    return false;
}

void UGGVoiceOverComponent::OnAudioFinished() {
}

void UGGVoiceOverComponent::MulticastPlayVoiceOver_Implementation(FGameplayTag VoiceOverType, bool bCanInterruptCurrentLine, bool bCanBeStoppedByDamage) {
}

void UGGVoiceOverComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGVoiceOverComponent, NPCVoiceIdentity);
}


