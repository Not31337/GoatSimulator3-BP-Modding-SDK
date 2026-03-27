#include "GGTraceParams.h"

FGGTraceParams::FGGTraceParams() {
    this->TraceType = EGGTraceType::Sphere;
    this->ConeAngle = 0.00f;
    this->TraceRadius = 0.00f;
    this->AimPitchOffset = 0.00f;
    this->TraceDistance = 0.00f;
    this->TraceChannel = ECC_WorldStatic;
    this->TraceOrigin = EGGTraceOrigin::Camera;
    this->bIgnoreSelf = false;
    this->bTraceComplex = false;
    this->DrawDebug = EDrawDebugTrace::None;
}

