#include "GGPropStateManager.h"
#include "Net/UnrealNetwork.h"

UGGPropStateManager::UGGPropStateManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGGPropStateManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGPropStateManager, Data);
}


