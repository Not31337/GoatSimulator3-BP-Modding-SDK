#include "GGAnimNotifyState_SetStance.h"

UGGAnimNotifyState_SetStance::UGGAnimNotifyState_SetStance() {
    this->Stance = ELSStance::Standing;
    this->bMaintainBaseLocation = true;
    this->bSwitchBackToPreviousStance = true;
    this->StanceWhenDone = ELSStance::Standing;
}


