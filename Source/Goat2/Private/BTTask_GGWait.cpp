#include "BTTask_GGWait.h"

UBTTask_GGWait::UBTTask_GGWait() {
    this->NodeName = TEXT("GG Wait");
    this->WaitType = EWaitType::WT_Default;
    this->WaitTime = 5.00f;
    this->RandomDeviation = 0.00f;
    this->bUseWaypointPreAnimationWait = false;
    this->bCanEditDefault = false;
    this->bCanEditBBKey = false;
    this->bCanEditFloatBBEntries = false;
}


