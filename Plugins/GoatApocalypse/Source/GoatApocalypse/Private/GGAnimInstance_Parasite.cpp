#include "GGAnimInstance_Parasite.h"

UGGAnimInstance_Parasite::UGGAnimInstance_Parasite() {
    this->MovementSpeed = 2.00f;
    this->MovementSpeedSwitchingTargets = 3.00f;
    this->TargetLocationOffset = 15.00f;
    this->CurveDistanceToTarget = TEXT("DistanceToTarget");
    this->HeadRadius = 15.00f;
    this->StateMachineName = TEXT("State Machine");
    this->BlendAlphaToPlayStareMontage = 0.80f;
    this->StareAnimation = NULL;
    this->MaxScale = 6.00f;
    this->Alpha = 0.00f;
    this->bHasValidTarget = false;
    this->IdleAnimationPlayRate = 1.00f;
    this->LookAtTargetAlpha = 0.00f;
    this->ChewAnimationStartTime = 0.33f;
    this->StareAnimationExplicitTime = 0.00f;
    this->StareAnimationAlphaBlend = 0.00f;
    this->bPlayStareAnimation = false;
    this->AlphaRagdoll = 0.00f;
    this->bIsPlayingGrabAnimation = false;
    this->ParasiteGear = NULL;
    this->LastTarget = NULL;
}

void UGGAnimInstance_Parasite::SetIsPlayingGrabAnimation(bool bIsPlaying) {
}


