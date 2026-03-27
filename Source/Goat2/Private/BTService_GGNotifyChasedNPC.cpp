#include "BTService_GGNotifyChasedNPC.h"

UBTService_GGNotifyChasedNPC::UBTService_GGNotifyChasedNPC() {
    this->NodeName = TEXT("Notify Chased NPC");
    this->NotifyDistance = 1200.00f;
    this->ManagedNPC = NULL;
    this->BlackboardComp = NULL;
}


