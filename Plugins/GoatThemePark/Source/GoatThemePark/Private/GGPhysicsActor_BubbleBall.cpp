#include "GGPhysicsActor_BubbleBall.h"
#include "Net/UnrealNetwork.h"

AGGPhysicsActor_BubbleBall::AGGPhysicsActor_BubbleBall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bCanBeOptimized = false;
    this->bCanChangeTickRate = false;
    this->BounceRetriggerDelay = 0.25f;
    this->MinVelocityForBounceSound = 500.00f;
    this->MinNormalVelocityForBounce = 100.00f;
    this->NonPlayerLifeSpan = 180.00f;
    this->GoatSteeringForce = 200.00f;
    this->BubbleHealthMax = 500.00f;
    this->HeadbuttImpulsePower = 500.00f;
    this->HeadbuttCooldown = 1.00f;
    this->DefaultScaleModifier = 1.00f;
    this->BubbleGumBounceTarget = 20;
    this->InvalidCatchClasses.AddDefaulted(2);
    this->AssociatedCounter = NULL;
    this->CharacterInside = NULL;
    this->NPCInside = NULL;
    this->GoatInside = NULL;
    this->MaterialInstance = NULL;
    this->PopVFX = NULL;
    this->PopSFX = NULL;
    this->BounceSFX = NULL;
    this->CatchVFX = NULL;
    this->CatchSFX = NULL;
}

void AGGPhysicsActor_BubbleBall::ServerPlayerHeadbutt_Implementation(FVector Direction) {
}

void AGGPhysicsActor_BubbleBall::ServerExitBubbleBall_Implementation() {
}

void AGGPhysicsActor_BubbleBall::OnRep_CatchState() {
}

void AGGPhysicsActor_BubbleBall::OnPlayerInteractInput(AGGPlayerController* PlayerController) {
}

void AGGPhysicsActor_BubbleBall::OnPlayerHeadbuttInput(AGGPlayerController* PlayerController) {
}

void AGGPhysicsActor_BubbleBall::OnPlayerAbilityInput() {
}

void AGGPhysicsActor_BubbleBall::OnNPCPooledOrMoved(AGGNPC* NPC, bool WasPooled) {
}

void AGGPhysicsActor_BubbleBall::OnCharacterTeleported(AGGCharacter* Character, const FTransform& OldTransform) {
}

void AGGPhysicsActor_BubbleBall::OnActorInsideDestroyed(AActor* DestroyedActor) {
}

void AGGPhysicsActor_BubbleBall::MulticastReleaseCatchedActor_Implementation(AActor* ActorToRelease, const FVector& ReleaseLocation) {
}

void AGGPhysicsActor_BubbleBall::MulticastPlayHeadbuttMontage_Implementation() {
}

void AGGPhysicsActor_BubbleBall::MulticastCatchActorTriggerInstinct_Implementation(AGGGoat* InstinctOwner) {
}

void AGGPhysicsActor_BubbleBall::MulticastCatchActor_Implementation(AActor* ActorToCatch, const FVector& HoldingLocation) {
}

void AGGPhysicsActor_BubbleBall::EffectsLoaded() {
}

void AGGPhysicsActor_BubbleBall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPhysicsActor_BubbleBall, CatchState);
}


