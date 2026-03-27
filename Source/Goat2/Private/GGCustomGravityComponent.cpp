#include "GGCustomGravityComponent.h"
#include "Net/UnrealNetwork.h"

UGGCustomGravityComponent::UGGCustomGravityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GravityForce = 0.00f;
    this->MaxVelocityZ = 0.00f;
    this->GravityMultiplier = 1.00f;
}

void UGGCustomGravityComponent::SetMaxVelocityZ(float NewValue) {
}

void UGGCustomGravityComponent::SetGravityMultiplier(float NewValue) {
}

void UGGCustomGravityComponent::SetGravityForce(float NewValue) {
}

void UGGCustomGravityComponent::EnableCustomGravity(float Duration, float Gravity, float MaxVelocityFromGravity) {
}

void UGGCustomGravityComponent::DisableCustomGravity() {
}

void UGGCustomGravityComponent::AddGravityMultiplier(float NewValue) {
}

UGGCustomGravityComponent* UGGCustomGravityComponent::AddCustomGravityComponent(AActor* Owner, float Gravity, float MaxVelocityFromGravity, bool bStartEnabled, float Duration, float Multiplier) {
    return NULL;
}

void UGGCustomGravityComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGCustomGravityComponent, GravityForce);
    DOREPLIFETIME(UGGCustomGravityComponent, MaxVelocityZ);
    DOREPLIFETIME(UGGCustomGravityComponent, GravityMultiplier);
}


