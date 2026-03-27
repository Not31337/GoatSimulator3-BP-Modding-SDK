#include "BTTask_GGNotifyNPC.h"

UBTTask_GGNotifyNPC::UBTTask_GGNotifyNPC() {
    this->NodeName = TEXT("Notify NPC");
    this->NotifyMode = ENotifyNPCMode::NNM_SingleNotify;
    this->bNotifyAboutAnActor = true;
    this->bUseLocation = false;
    this->ProximityNotifyRadius = 500.00f;
    this->bIgnoreSelf = false;
}


