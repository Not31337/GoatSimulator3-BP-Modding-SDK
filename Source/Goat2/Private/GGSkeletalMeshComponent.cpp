#include "GGSkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

UGGSkeletalMeshComponent::UGGSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableUpdateRateOptimizations = true;
    this->bCanBecomePhysicsActor = true;
    this->bCanBecomePhysicsActorByActorDamage = true;
    this->bCanBecomePhysicsActorByDamage = true;
    this->bCanBecomePhysicsActorByImpact = true;
    this->MomentumThreshold = 100.00f;
    this->MaxAngularImpulse = 15.00f;
}

void UGGSkeletalMeshComponent::OnRep_OnPhysicsActorStateUpdate() {
}


void UGGSkeletalMeshComponent::ActorTakeDamageWithEvent_Implementation(float DamageAmount, FVector InImpulse, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}

void UGGSkeletalMeshComponent::ActorTakeDamage_Implementation(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}

void UGGSkeletalMeshComponent::ActorTakeAnyDamage_Implementation(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void UGGSkeletalMeshComponent::ActorOnHitDelegate_Implementation(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGSkeletalMeshComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGSkeletalMeshComponent, PhysicsActorState);
}


