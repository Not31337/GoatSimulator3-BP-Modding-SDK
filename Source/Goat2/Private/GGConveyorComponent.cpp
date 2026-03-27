#include "GGConveyorComponent.h"
#include "Net/UnrealNetwork.h"

UGGConveyorComponent::UGGConveyorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bConveyorEnabled = true;
    this->ConveyorSpeed = 300.00f;
}

void UGGConveyorComponent::SetConveyorSpeed(float NewSpeed) {
}

void UGGConveyorComponent::SetConveyorEnabled(bool NewEnabled) {
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


