#include "LoadedAppearancePart.h"

FLoadedAppearancePart::FLoadedAppearancePart() {
    this->AppearancePart = EAppearanceParts::AP_None;
    this->StaticMesh = NULL;
    this->SkeletalMesh = NULL;
    this->Material = NULL;
    this->bHideLowerBody = false;
}

