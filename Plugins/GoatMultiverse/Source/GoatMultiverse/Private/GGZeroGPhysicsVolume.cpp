#include "GGZeroGPhysicsVolume.h"

AGGZeroGPhysicsVolume::AGGZeroGPhysicsVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSetToFallingWhenLeavingVolume = true;
}

void AGGZeroGPhysicsVolume::OnMovementModeChanged(TEnumAsByte<EMovementMode> NewMode, TEnumAsByte<EMovementMode> PrevMode, uint8 NewCustomMode, uint8 PrevCustomMode, ULSCharacterMovementComponent* MovementComp) {
}

void AGGZeroGPhysicsVolume::OnCharacterTeleported(AGGCharacter* Character, const FTransform& OldTransform) {
}

void AGGZeroGPhysicsVolume::OnCharacterRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}


