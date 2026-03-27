#include "GGIceSplineMeshComponent.h"
#include "Net/UnrealNetwork.h"

UGGIceSplineMeshComponent::UGGIceSplineMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Movable;
}

void UGGIceSplineMeshComponent::Shatter() {
}

void UGGIceSplineMeshComponent::OnRep_IceSectionParams() {
}

void UGGIceSplineMeshComponent::MakeSlippery() {
}

void UGGIceSplineMeshComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGIceSplineMeshComponent, IceSectionParams);
}


