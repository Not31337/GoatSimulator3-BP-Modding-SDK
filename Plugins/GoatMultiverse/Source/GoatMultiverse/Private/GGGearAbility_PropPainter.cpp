#include "GGGearAbility_PropPainter.h"

UGGGearAbility_PropPainter::UGGGearAbility_PropPainter() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->TraceDistance = 450.00f;
    this->VerticalTraceAngleOffset = 20.00f;
    this->ObjectsToTraceFor.AddDefaulted(1);
    this->PaintingClass = NULL;
    this->BrushTipParticles = NULL;
}


