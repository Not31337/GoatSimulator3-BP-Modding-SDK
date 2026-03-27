#include "GGGearAbility_BubbleGun.h"
#include "GGSoapBubbleProjectile.h"

UGGGearAbility_BubbleGun::UGGGearAbility_BubbleGun() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->MaxNumberOfBubbles = 15;
    this->DelayBetweenBubbleSpawn = 0.05f;
    this->SoapBubbleClass = AGGSoapBubbleProjectile::StaticClass();
    this->CameraAimPercentage = 1.00f;
    this->BurstParticle = NULL;
    this->ParticleSocketName = TEXT("BubblesSocket");
}


