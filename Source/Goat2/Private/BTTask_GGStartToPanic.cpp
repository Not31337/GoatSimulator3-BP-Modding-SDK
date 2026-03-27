#include "BTTask_GGStartToPanic.h"

UBTTask_GGStartToPanic::UBTTask_GGStartToPanic() {
    this->NodeName = TEXT("Start To Panic");
    this->PanicType = EPanicTypes::PT_None;
    this->bSetSourceLocation = true;
    this->bSetSourceActor = false;
}


