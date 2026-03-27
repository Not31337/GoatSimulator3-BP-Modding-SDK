#include "BTTask_GGReturnFromIdleNPC.h"

UBTTask_GGReturnFromIdleNPC::UBTTask_GGReturnFromIdleNPC() {
    this->NodeName = TEXT("Return From Idle NPC");
    this->bAttemptToResetCollision = true;
    this->bAlwaysSucceed = false;
}


