#include "GGConveyorComponent.h"
#include "Net/UnrealNetwork.h"

UGGConveyorComponent::UGGConveyorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeBodySetup = NULL;
    this->bConveyorEnabled = true;
    this->bUsePhysicalConveyor = false;
    this->ConveyorSpeed = 300.00f;
    this->PhysicalConveyor = NULL;
    this->ReverseComponent = NULL;
}

void UGGConveyorComponent::SetConveyorSpeed(float NewSpeed) {
}

void UGGConveyorComponent::SetConveyorEnabled(bool NewEnabled) {
}

void UGGConveyorComponent::OnRep_ConveyorEnabled() {
}

void UGGConveyorComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UGGConveyorComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UGGConveyorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGConveyorComponent, bConveyorEnabled);
    DOREPLIFETIME(UGGConveyorComponent, ConveyorSpeed);
}


