#include "GGGoatGear_Body_CottonCandy.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Body_CottonCandy::UGGGoatGear_Body_CottonCandy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasPassiveEffect = true;
    this->MaxAttachedActors = 25;
    this->HoldDurationToReleaseActors = 0.25f;
    this->PossibleAttachBones.AddDefaulted(4);
    this->ReleaseImpulsePActors = 2000.00f;
    this->ReleaseImpulseNpcs = 1000.00f;
    this->MaxStretchDistanceForAttachedActors = 200.00f;
    this->StickyStatusEffectClass = NULL;
    this->ActorAttachParticles = NULL;
    this->StickyStatusEffectOngoingParticles = NULL;
    this->CottonCandyInstinctTarget = 5;
}

void UGGGoatGear_Body_CottonCandy::ServerDetachAllActors_Implementation() {
}

void UGGGoatGear_Body_CottonCandy::ServerDetachActor_Implementation(AActor* Actor) {
}

void UGGGoatGear_Body_CottonCandy::ServerAttachActor_Implementation(FGGCottonCandyAttachedActor AttachedActor) {
}

void UGGGoatGear_Body_CottonCandy::OnRep_AttachedActors() {
}

void UGGGoatGear_Body_CottonCandy::OnGoatUnRagdolled(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGGoatGear_Body_CottonCandy::OnGoatRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGGoatGear_Body_CottonCandy::OnGoatPushedSomeone(UGGCharacterPushComponent* Pushed, FVector Velocity) {
}

void UGGGoatGear_Body_CottonCandy::OnGoatMeshHitSomething(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGGoatGear_Body_CottonCandy::OnGoatHitSomething(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGGoatGear_Body_CottonCandy::OnGoatCapsuleHitSomething(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGGoatGear_Body_CottonCandy::OnAttachedActorDestroyed(AActor* AttachedActor) {
}

void UGGGoatGear_Body_CottonCandy::MulticastActorAttachedToGear_Implementation(AActor* Actor) {
}

void UGGGoatGear_Body_CottonCandy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Body_CottonCandy, AttachedActors);
}


