#include "BTTask_GGHandleWaypointAnimation.h"

UBTTask_GGHandleWaypointAnimation::UBTTask_GGHandleWaypointAnimation() {
    this->NodeName = TEXT("Handle Waypoint Animation");
    this->NodeOwnerComp = NULL;
    this->NPC = NULL;
    this->Waypoint = NULL;
    this->WIEvent = NULL;
}

void UBTTask_GGHandleWaypointAnimation::OnGGAnimNotifyTrigger(AGGCharacter* TriggeredOnNPC, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag) {
}

void UBTTask_GGHandleWaypointAnimation::OnAnimationEnded(UAnimMontage* Montage, bool Interrupted) {
}


