#include "GGAnimInstance_StickyBomb_Blob.h"

UGGAnimInstance_StickyBomb_Blob::UGGAnimInstance_StickyBomb_Blob() {
    this->MovingSpeedThreshold = 150.00f;
    this->DelayStopMoving = 0.50f;
    this->AnimNotify_AttackAnimationEnd = TEXT("AnimNotify_AttackAnimationEnd");
    this->bIsMoving = false;
    this->bHasPlayedAttackAnimation = false;
    this->bIsCooldownOver = false;
}


