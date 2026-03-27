#include "GGPhysicalMaterial.h"

UGGPhysicalMaterial::UGGPhysicalMaterial() {
    this->bUseOriginalDensity = true;
    this->bHugeObject = false;
    this->HugeObjectAngularImpulseScale = 20000.00f;
    this->OverrideLinear = false;
    this->LinearDampening = 0.00f;
    this->OverrideAngular = false;
    this->AngularDampening = 0.00f;
}


