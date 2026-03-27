#include "GGGoatGear_Scene_Horns_Maracas.h"

UGGGoatGear_Scene_Horns_Maracas::UGGGoatGear_Scene_Horns_Maracas(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WalkLoopSound = NULL;
    this->ActionSound = NULL;
    this->MinRagdollHitImpulse = 400.00f;
    this->WalkAudioComponent = NULL;
}

void UGGGoatGear_Scene_Horns_Maracas::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGGoatGear_Scene_Horns_Maracas::OnGoatStartedLicking(AGGGoat* GoatLicking) {
}

void UGGGoatGear_Scene_Horns_Maracas::OnGoatHeadbutting(AGGGoat* GoatHeadbutting, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt) {
}

void UGGGoatGear_Scene_Horns_Maracas::OnGoatBouncyJump(AGGGoat* GoatJumping, int32 JumpCount, FVector Location) {
}

void UGGGoatGear_Scene_Horns_Maracas::OnCharacterHasJumped(AGGCharacter* Character) {
}

void UGGGoatGear_Scene_Horns_Maracas::GoatTookDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void UGGGoatGear_Scene_Horns_Maracas::GoatRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}


