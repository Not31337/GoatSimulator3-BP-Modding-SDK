#include "GGCharacterPushComponent.h"
#include "GGDamageType_GoatTackle.h"
#include "Net/UnrealNetwork.h"

UGGCharacterPushComponent::UGGCharacterPushComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mass = 100.00f;
    this->bCanGetPushedByOverlappingPActors = true;
    this->VehicleMinStumbleSpeed = 200.00f;
    this->DamageOnStumble = 50.00f;
    this->HitInterval = 0.20f;
    this->LandingHitDelay = 0.50f;
    this->DefaultDamageType = UGGDamageType_GoatTackle::StaticClass();
    this->OverlapObjectTypes.AddDefaulted(4);
    this->ActorClassesToCollideWith.AddDefaulted(3);
    this->bRagdollNPCsWithSameSpeedWhenSprinting = false;
    this->bRagdollNPCsWithSameSpeedWhenJumping = false;
    this->StumbleSpeedThreshold = 190.00f;
    this->RagdollSpeedThreshold = 300.00f;
    this->VehicleRagdollSpeedThreshold = 100.00f;
    this->OverlapComponentOverride = NULL;
    this->PrimitiveRoot = NULL;
    this->CharacterOwner = NULL;
    this->GGCharacterOwner = NULL;
    this->LastActiveStumbleMontage = NULL;
    this->LastPushedBy = NULL;
}

void UGGCharacterPushComponent::ServerTakeRagdollDamageOther_Implementation(UGGCharacterPushComponent* StumbleComponent, const FImpulseDamageEvent& DamageEvent) {
}

void UGGCharacterPushComponent::ServerTakeRagdollDamage_Implementation(const FImpulseDamageEvent& DamageEvent) {
}

void UGGCharacterPushComponent::ServerStumbleOther_Implementation(UGGCharacterPushComponent* StumbleComponent, FVector Impulse) {
}

void UGGCharacterPushComponent::ServerStumbleCharacter_Implementation(float Speed, FVector Direction, AActor* StumbledBy) {
}

void UGGCharacterPushComponent::ServerRemoveIgnoredActor_Implementation(AActor* InActor) {
}

void UGGCharacterPushComponent::ServerRemoveAllIgnoredActors_Implementation() {
}

void UGGCharacterPushComponent::ServerPushOther_Implementation(ACharacter* OtherCharacter, FVector PushVelocity, AActor* PushedBy) {
}

void UGGCharacterPushComponent::ServerAddIgnoredActor_Implementation(AActor* InActor) {
}

void UGGCharacterPushComponent::OnRecentlyHitActorDestroyed(AActor* DestroyedActor) {
}

void UGGCharacterPushComponent::OnOwnerReleased(AActor* CatchedActor, AActor* Catcher) {
}

void UGGCharacterPushComponent::OnOwnerRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* InCharacterOwner, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGCharacterPushComponent::OnOwnerPreScaled(bool bIsBeingCatched) {
}

void UGGCharacterPushComponent::OnOwnerGrabbed(AGGCharacter* Grabber, AGGCharacter* OwnerCharacter) {
}

void UGGCharacterPushComponent::OnOwnerDropped(AGGCharacter* Grabber, AGGCharacter* OwnerCharacter) {
}

void UGGCharacterPushComponent::OnOwnerCatched(AActor* CatchedActor, AActor* Catcher) {
}

void UGGCharacterPushComponent::OnNPCOwnerPooled(AGGNPC* NPC, bool bWasPooled) {
}

void UGGCharacterPushComponent::OnMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGCharacterPushComponent::OnCharacterOwnerLanded(const FHitResult& Hit) {
}

void UGGCharacterPushComponent::OnCapsuleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGCharacterPushComponent::MulticastStumbleCharacter_Implementation(float Speed, FVector Direction, AActor* StumbledBy) {
}

void UGGCharacterPushComponent::ClientPushCharacter_Implementation(FVector PushVelocity, AActor* PushedBy) {
}

void UGGCharacterPushComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGCharacterPushComponent, IgnoredActors);
}


