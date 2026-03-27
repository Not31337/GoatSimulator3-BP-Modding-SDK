#include "BTTask_GGRotateToFaceBBEntry.h"

UBTTask_GGRotateToFaceBBEntry::UBTTask_GGRotateToFaceBBEntry() {
    this->NodeName = TEXT("GG Rotate to face BB entry");
    this->Precision = 10.00f;
    this->bRandomRotation = false;
    this->bClearFocusAfterSucceeded = true;
    this->bInfiniteExecution = false;
    this->CompleteAfterDuration = 0.00f;
}


