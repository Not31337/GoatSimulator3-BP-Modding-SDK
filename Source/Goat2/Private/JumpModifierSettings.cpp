#include "JumpModifierSettings.h"

FJumpModifierSettings::FJumpModifierSettings() {
    this->bPreventRagdollOnLanding = false;
    this->bPreventTripleJumpModifier = false;
    this->bBouncyJumpInsteadOfPerfectLanding = false;
    this->JumpZVelocity = 0.00f;
}

