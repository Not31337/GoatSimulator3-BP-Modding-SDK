#include "GGWorldPersistenceComponent.h"
#include "Net/UnrealNetwork.h"

UGGWorldPersistenceComponent::UGGWorldPersistenceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentState = 0;
}

void UGGWorldPersistenceComponent::SetComponentState_Internal(uint8 NewState) {
}

void UGGWorldPersistenceComponent::SetComponentState(uint8 NewState, bool bSetPredictively) {
}

void UGGWorldPersistenceComponent::OnRep_ComponentState(uint8 PreviousState) {
}

uint8 UGGWorldPersistenceComponent::GetComponentState(bool& bIsInitialized) {
    return 0;
}

void UGGWorldPersistenceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGWorldPersistenceComponent, ComponentState);
}


