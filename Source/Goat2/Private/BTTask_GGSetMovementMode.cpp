#include "BTTask_GGSetMovementMode.h"

UBTTask_GGSetMovementMode::UBTTask_GGSetMovementMode() {
    this->NodeName = TEXT("Set Movement Mode");
    this->NewMovementMode = MOVE_None;
    this->CustomMovementMode = CMOVE_None;
}


