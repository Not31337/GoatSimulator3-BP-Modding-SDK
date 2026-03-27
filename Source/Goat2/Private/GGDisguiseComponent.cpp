#include "GGDisguiseComponent.h"
#include "Net/UnrealNetwork.h"

UGGDisguiseComponent::UGGDisguiseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGGDisguiseComponent::ServerRevertDisguise_Implementation() {
}

void UGGDisguiseComponent::OnRep_DisguiseActor() {
}

void UGGDisguiseComponent::OnNPCRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGDisguiseComponent::AbilityDown() {
}

void UGGDisguiseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGDisguiseComponent, DisguiseState);
}


