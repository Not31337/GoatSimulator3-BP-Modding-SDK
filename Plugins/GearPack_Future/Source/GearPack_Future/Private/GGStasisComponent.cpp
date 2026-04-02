#include "GGStasisComponent.h"

UGGStasisComponent::UGGStasisComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StasisPhysActor = NULL;
    this->StasisVehicle = NULL;
    this->OngoingStasisParticle = NULL;
}

void UGGStasisComponent::OnVehicleSignificanceChanged(AGGVehicle* Vehicle, float NewSignificance, float OldSignificance) {
}

void UGGStasisComponent::OnVehiclePooledOrMoved(AGGVehicle* Vehicle, bool WasPooled) {
}

void UGGStasisComponent::OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void UGGStasisComponent::OnPActorSignificanceChanged(AGGPhysicsActor_Base* PActor, float NewSignificance, float OldSignificance) {
}

void UGGStasisComponent::OnOwnerCatched(AActor* CatchedActor, AActor* Catcher) {
}

void UGGStasisComponent::OnComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void UGGStasisComponent::OnActorLicked(AActor* LickedActor, AGGGoat* LickingGoat) {
}


