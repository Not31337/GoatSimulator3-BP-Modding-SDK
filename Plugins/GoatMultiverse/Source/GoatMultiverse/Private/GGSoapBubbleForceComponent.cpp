#include "GGSoapBubbleForceComponent.h"

UGGSoapBubbleForceComponent::UGGSoapBubbleForceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FloatForcePerBubble = 110000.00f;
    this->CharacterFloatingForce = 500000.00f;
    this->MaxVerticalSpeed = 1500.00f;
    this->WindTorqueForce = 10000.00f;
}

void UGGSoapBubbleForceComponent::OnSoapBubbleDestroyed(AActor* DestroyedBubble) {
}

void UGGSoapBubbleForceComponent::OnAttachedGoatHeadbutted(AGGGoat* GoatHeadbutting, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt) {
}


