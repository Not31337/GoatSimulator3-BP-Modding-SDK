#include "GGCloneComponent.h"
#include "Net/UnrealNetwork.h"

UGGCloneComponent::UGGCloneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGGCloneComponent::OnRep_RepVars() {
}

void UGGCloneComponent::OnRep_AttachedComponents() {
}

void UGGCloneComponent::OnNPCPooledOrMoved(AGGNPC* NPC, bool WasPooled) {
}

void UGGCloneComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGCloneComponent, RepVars);
    DOREPLIFETIME(UGGCloneComponent, AttachedComponents);
}


