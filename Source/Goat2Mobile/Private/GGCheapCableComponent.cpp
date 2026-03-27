#include "GGCheapCableComponent.h"

UGGCheapCableComponent::UGGCheapCableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Scale = 0.00f;
}

void UGGCheapCableComponent::SetAttachEndToComponent(USceneComponent* Component, FName SocketName) {
}

void UGGCheapCableComponent::SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName) {
}

UGGCheapCableComponent* UGGCheapCableComponent::ReplaceWithCheapCableComponent(UCableComponent* CableComponent) {
    return NULL;
}


