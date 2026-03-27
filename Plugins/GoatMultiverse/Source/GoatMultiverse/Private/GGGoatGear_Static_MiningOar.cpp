#include "GGGoatGear_Static_MiningOar.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_MiningOar::UGGGoatGear_Static_MiningOar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAbilityActive = false;
    this->OarRotationSound = NULL;
    this->SpinningParticleComponent = NULL;
    this->DarkRockWallParticleComponent = NULL;
    this->SpinningParticle = NULL;
    this->DarkRockWallParticle = NULL;
    this->SpinningSparticleSocketName = TEXT("WindParticle");
    this->OarRotationSpeed = 2500.00f;
    this->OarRotationSoundCue = NULL;
    this->OarRotationStoppedSoundCue = NULL;
    this->OarImpactCue = NULL;
    this->OarImpactParticle = NULL;
    this->BaseImpulse = 1000.00f;
    this->CharacterImpulseScalar = 1.00f;
    this->VehicleImpulseScalar = 10.00f;
    this->PActorImpulseScalar = 1.00f;
    this->BaseDamage = 500.00f;
    this->CharacterDamageScalar = 1.00f;
    this->VehicleDamageScalar = 5.00f;
    this->PActorDamageScalar = 1.00f;
    this->DamageRadius = 150.00f;
    this->DamageType = NULL;
    this->DelayBetweenDamageTicks = 0.10f;
    this->ActorImpulseCooldown = 0.20f;
    this->DarkRockActorClass = NULL;
}

void UGGGoatGear_Static_MiningOar::OnRep_AbilityActive(bool bPreviousActive) {
}

void UGGGoatGear_Static_MiningOar::OnOarBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UGGGoatGear_Static_MiningOar::OnAppliedImpulseAtLocation_Implementation(FVector_NetQuantize10 ImpulseLocation) {
}

void UGGGoatGear_Static_MiningOar::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_MiningOar, bAbilityActive);
}


