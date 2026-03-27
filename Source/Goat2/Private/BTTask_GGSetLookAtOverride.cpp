#include "BTTask_GGSetLookAtOverride.h"

UBTTask_GGSetLookAtOverride::UBTTask_GGSetLookAtOverride() {
    this->NodeName = TEXT("Set Look At Override");
    this->bClearOverride = false;
    this->Duration = 0.00f;
    this->bResetOnRagdoll = true;
    this->bResetOnProximityReact = true;
    this->bResetOnExtremeMood = true;
    this->bResetOnPanic = true;
}


