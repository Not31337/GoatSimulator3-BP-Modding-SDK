#include "BTDecorator_GGIsNPCEventState.h"

UBTDecorator_GGIsNPCEventState::UBTDecorator_GGIsNPCEventState() {
    this->NodeName = TEXT("Is NPC Event State");
    this->StateToCheck = 0;
    this->CheckType = ECheckType::CT_Equals;
}


