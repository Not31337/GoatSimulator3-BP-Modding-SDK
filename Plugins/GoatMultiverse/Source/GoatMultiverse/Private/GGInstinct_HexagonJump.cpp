#include "GGInstinct_HexagonJump.h"

AGGInstinct_HexagonJump::AGGInstinct_HexagonJump(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_HexagonJump::GoatRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void AGGInstinct_HexagonJump::GoatMovementModeChanged(ACharacter* CharacterGoat, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void AGGInstinct_HexagonJump::GoatJumpedWithModifier(AGGGoat* Goat, const FFindFloorResult& Floor, bool bWasBouncyJump) {
}


