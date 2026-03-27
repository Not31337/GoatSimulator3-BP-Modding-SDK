#include "BTTask_GGSetBB_Float.h"

UBTTask_GGSetBB_Float::UBTTask_GGSetBB_Float() {
    this->NodeName = TEXT("Set Blackboard Float");
    this->Value = 0.00f;
    this->bRandomInRange = false;
    this->bAddToCurrent = false;
}


