#include "GGGoatGear_Skel_Body_Bob.h"

UGGGoatGear_Skel_Body_Bob::UGGGoatGear_Skel_Body_Bob(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OngoingDripParticle = NULL;
    this->DripPSC = NULL;
    this->BobWalkingSound = NULL;
    this->BobWalkingSoundVelocityParameterName = TEXT("Velocity");
    this->WalkingAudioComponent = NULL;
    this->BobJumpSound = NULL;
    this->BobLandSound = NULL;
}

void UGGGoatGear_Skel_Body_Bob::OnJumped(AGGCharacter* Character) {
}

void UGGGoatGear_Skel_Body_Bob::OnGoatUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGGoatGear_Skel_Body_Bob::OnGoatRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGGoatGear_Skel_Body_Bob::GoatMovementModeChanged(TEnumAsByte<EMovementMode> CurrentMovement, uint8 CustomMovement, TEnumAsByte<EMovementMode> PrevMovement, uint8 PrevCustomMovement) {
}

void UGGGoatGear_Skel_Body_Bob::CharacterOnLanded(const FHitResult& Hit) {
}


