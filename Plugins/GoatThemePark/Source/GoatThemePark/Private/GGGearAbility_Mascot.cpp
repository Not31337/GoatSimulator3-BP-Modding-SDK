#include "GGGearAbility_Mascot.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_Mascot::UGGGearAbility_Mascot() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bCanActivateWhileRagdoll = false;
    this->PlushiePActorClass = NULL;
    this->LaunchImpulse = 3000.00f;
    this->LaunchAngularImpulse = 750.00f;
    this->HandSpawnSocket = TEXT("HandSocket_Right");
    this->PostLoopSectionName = TEXT("Loop End");
    this->AimCameraBlendSpeed = 5.00f;
    this->AimCameraDistance = 200.00f;
    this->ClientAuthorityDuration = 2.00f;
    this->CrosshairWidgetClass = NULL;
    this->CrosshairSize = 25.00f;
    this->StartAimingSound = NULL;
    this->HeldPActor = NULL;
    this->HeldTrashCan = NULL;
    this->ActiveMontage = NULL;
    this->Crosshair = NULL;
}

void UGGGearAbility_Mascot::OnTrashCanHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGGearAbility_Mascot::OnRep_HeldPlushiPActor() {
}

void UGGGearAbility_Mascot::OnEffectSourceChanged(FGameplayTag EffectTag, bool IsAdded) {
}

void UGGGearAbility_Mascot::MulticastTriggerInstinct_Implementation(AGGGoat* InstinctOwner) {
}

void UGGGearAbility_Mascot::AnimNotify_ReleasePlushie() {
}

void UGGGearAbility_Mascot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_Mascot, HeldPActor);
    DOREPLIFETIME(UGGGearAbility_Mascot, ActiveMontage);
}


