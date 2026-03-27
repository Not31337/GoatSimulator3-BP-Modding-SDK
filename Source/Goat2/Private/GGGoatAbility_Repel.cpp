#include "GGGoatAbility_Repel.h"

UGGGoatAbility_Repel::UGGGoatAbility_Repel() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->StartLocationBoneName = TEXT("Root");
    this->RepelDamage = 100.00f;
    this->RepelPower = 30000.00f;
    this->RepelSize = 30.00f;
    this->bIsRepelPowerVelocityChange = false;
    this->RepelHalfHeight = 50.00f;
    this->StartDistanceFromGoat = 0.00f;
    this->DistanceFromGoat = 100.00f;
    this->RepelCharacterImpulsePower = 1500.00f;
    this->RepelZValue = 0.20f;
    this->MontagePlayRate = 1.00f;
    this->bDrawOverlapShape = false;
    this->bRepelOnRelease = false;
    this->ClientTakeRagdollAuthorityFor = 5.00f;
    this->ActorHitReactionWeights.AddDefaulted(4);
    this->ActorHitReactionRadius = 500.00f;
    this->ActorHitLookAtDuration = 7.00f;
    this->CurrentAbilityMontage = NULL;
}

void UGGGoatAbility_Repel::ReplicateRepelImpulseServer_Implementation(const TArray<FImpulseDamageEvent>& DamageEvents, const TArray<AActor*>& TargetActors) {
}

void UGGGoatAbility_Repel::ReplicateOnRepelStartedServer_Implementation() {
}

void UGGGoatAbility_Repel::ReplicateOnRepelEndedServer_Implementation() {
}

bool UGGGoatAbility_Repel::RepelImpulseDelayed() {
    return false;
}

void UGGGoatAbility_Repel::RepelImpulse(bool SaveRepelledActors, bool ApplySweep, bool IgnoreSavedActors) {
}

void UGGGoatAbility_Repel::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UGGGoatAbility_Repel::MulticastOnRepelStarted_Implementation(AGGGoat* GoatThatStarted) {
}

void UGGGoatAbility_Repel::EndRepel() {
}

void UGGGoatAbility_Repel::CreateRepelNotification(AGGGoat* Goat, FText RepelledThingName) {
}

void UGGGoatAbility_Repel::CharacterRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* Character, const FRagdollStateChangeSettings& StateChangeSettings) {
}


