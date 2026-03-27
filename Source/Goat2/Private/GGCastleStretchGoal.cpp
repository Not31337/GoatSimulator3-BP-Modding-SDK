#include "GGCastleStretchGoal.h"

AGGCastleStretchGoal::AGGCastleStretchGoal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->StretchGoalIndex = 0;
    this->StretchGoalGroup = NULL;
    this->DisplayIcon = NULL;
    this->NeededChaosAmount = 0;
    this->CurrentState = EStretchGoalStates::SGIS_Inactive;
    this->GoalSequence = NULL;
    this->StretchGoalFadeDuration = 1.50f;
    this->StretchGoalFadeInDuration = 1.50f;
    this->bAutomaticallyFadeIn = true;
    this->UnlockTimerDelay = 1.50f;
    this->bSeenSequence = false;
    this->bCanEditGoalIndex = true;
    this->bCanEditChaosCost = true;
}

void AGGCastleStretchGoal::SequenceFinished() {
}



void AGGCastleStretchGoal::MulticastSetToFinishedState_Implementation() {
}

void AGGCastleStretchGoal::MulticastPlaySequence_Implementation() {
}

void AGGCastleStretchGoal::MulticastFadeOut_Implementation() {
}

void AGGCastleStretchGoal::MulticastFadeIn_Implementation() {
}



void AGGCastleStretchGoal::FadeIn() const {
}



