#include "GGStatusEffectRifted.h"
#include "EStatusEffectTypes.h"

AGGStatusEffectRifted::AGGStatusEffectRifted(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatusEffectType = EStatusEffectTypes::SET_Rifted;
    this->SpreadStatusEffectType = EStatusEffectTypes::SET_Rifted;
    this->HeadbuttParticle = NULL;
    this->HeadbuttSound = NULL;
    this->HeadbuttRadius = 0.00f;
    this->bRemoveOnGoatMovementModeChange = true;
    this->bEnforceGoatFlying = false;
    this->bDisableGravityForVehicles = false;
    this->bSpreadEffectOnHeadbutt = true;
    this->StatusEffectCameraComponentClass = NULL;
    this->bUnlockCameraPitch = false;
    this->RadialForceComponentClass = NULL;
}

void AGGStatusEffectRifted::SetGoatGravityEnabled_Implementation(AGGGoat* Goat, bool bNewEnabled) {
}

void AGGStatusEffectRifted::OnMovementModeChanged(TEnumAsByte<EMovementMode> CurrentMovement, uint8 CustomMovement, TEnumAsByte<EMovementMode> PrevMovement, uint8 PrevCustomMovement) {
}

void AGGStatusEffectRifted::OnGoatHeadbutting(AGGGoat* Goat, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt) {
}

void AGGStatusEffectRifted::OnCharacterRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}


