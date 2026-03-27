#include "GGGearAbility_ThorsHammer.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_ThorsHammer::UGGGearAbility_ThorsHammer() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ChargeDuration = 1.00f;
    this->ProjectileClass = NULL;
    this->VerticalLaunchAngleOffset = 0.00f;
    this->TeleportSpeed = 200.00f;
    this->TeleportMaxSpeed = 1000.00f;
    this->TeleportTimeLimit = 5.00f;
    this->HammerProjectile = NULL;
}

void UGGGearAbility_ThorsHammer::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGGearAbility_ThorsHammer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_ThorsHammer, HammerProjectile);
}


