#include "DefaultGearOverrides.h"

FDefaultGearOverrides::FDefaultGearOverrides() {
    this->Slot = EGearSlot::GS_None;
    this->bOffsetLocAffectChildMeshes = false;
    this->bOffsetRotAffectChildMeshes = false;
    this->bScaleAffectChildMeshes = false;
}

