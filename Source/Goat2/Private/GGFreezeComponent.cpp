#include "GGFreezeComponent.h"
#include "Templates/SubclassOf.h"

UGGFreezeComponent::UGGFreezeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FreezeDuration = 0.00f;
    this->bRagdollOnFreeze = false;
    this->bSkipStopBehaviour = false;
    this->MaterialOverride = NULL;
    this->FreezeParticles = NULL;
    this->FreezeSound = NULL;
    this->NumHeadbuttToSelfBrakeFree = 0;
    this->bAllowPlayerToBrakeFreeWhileTempFrozen = false;
    this->BrakeFreeAttemptParticles = NULL;
    this->BrakeFreeSound = NULL;
    this->DamageWhileFreezeReaction = EGGDamageWhileFreezeReaction::UnFreeze;
    this->DamageThresholdForReaction = 100.00f;
    this->bAccumulateDamage = false;
    this->ExplodeParticles = NULL;
    this->UnFreezeParticles = NULL;
    this->bIsOwnerFrozen = false;
    this->CharacterOwner = NULL;
    this->NPCOwner = NULL;
}

void UGGFreezeComponent::TryToUnFreezeActor(const AActor* InActor) {
}

UGGFreezeComponent* UGGFreezeComponent::TryToFreezeActorForDuration_K2(AActor* InActor, float Duration, TSubclassOf<UGGFreezeComponent> FreezeComponentClass) {
    return NULL;
}

UGGFreezeComponent* UGGFreezeComponent::TryToFreezeActor_K2(AActor* InActor, TSubclassOf<UGGFreezeComponent> FreezeComponentClass) {
    return NULL;
}

void UGGFreezeComponent::ServerPlayBrakeFreeAttemptVFX_Implementation() {
}

void UGGFreezeComponent::ServerOnPlayerHeadbutt_Implementation() {
}

void UGGFreezeComponent::OnPlayerHeadbutt(AGGPlayerController* PC) {
}

void UGGFreezeComponent::OnOwnerTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void UGGFreezeComponent::OnAttachedNPCUnRagdolled(bool bIsRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGFreezeComponent::OnAttachedNPCPooled(AGGNPC* NPC, bool bWasPooled) {
}

void UGGFreezeComponent::OnAttachedCharacterRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGFreezeComponent::MulticastPlayBrakeFreeAttemptVFX_Implementation() {
}

bool UGGFreezeComponent::IsActorFrozen(const AActor* TargetActor) {
    return false;
}


