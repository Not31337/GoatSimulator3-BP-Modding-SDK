#include "GGGearAbility_Pridesaber.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_Pridesaber::UGGGearAbility_Pridesaber() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ZapBaseImpulse = 1000.00f;
    this->CharactersZapImpulseModifier = 0.10f;
    this->VehiclesZapImpulseModifier = 10.00f;
    this->PActorsZapImpulseModifier = 1.00f;
    this->ZapBaseDamage = 500.00f;
    this->ZapRadius = 150.00f;
    this->CharactersZapDamageModifier = 0.10f;
    this->VehiclesZapDamageModifier = 10.00f;
    this->PActorsZapDamageModifier = 1.00f;
    this->DamageType = NULL;
    this->SocketBladesLeftTip = TEXT("BladesLeft_Tip");
    this->SocketBladesRightTip = TEXT("BladesRight_Tip");
    this->SphereTraceRadius = 8.00f;
    this->DelayBetweenDamageTicks = 0.10f;
    this->bSpawnBurstParticles = true;
    this->RainbowTrailDuration = 5.00f;
    this->PridesaberGear = NULL;
}

void UGGGearAbility_Pridesaber::OnRep_PridesaberGear() {
}

void UGGGearAbility_Pridesaber::HandleOnBladeOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UGGGearAbility_Pridesaber::HandleGoatEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGGearAbility_Pridesaber::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_Pridesaber, PridesaberGear);
}


