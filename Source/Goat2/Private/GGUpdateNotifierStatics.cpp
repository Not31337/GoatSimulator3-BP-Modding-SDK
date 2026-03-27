#include "GGUpdateNotifierStatics.h"

UGGUpdateNotifierStatics::UGGUpdateNotifierStatics() {
    this->DLCPrefNames.AddDefaulted(3);
}

bool UGGUpdateNotifierStatics::PlatformUsesOldDLCPopup() {
    return false;
}

UGGUpdateNotifierStatics* UGGUpdateNotifierStatics::Get() {
    return NULL;
}


