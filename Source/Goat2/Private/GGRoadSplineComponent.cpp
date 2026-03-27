#include "GGRoadSplineComponent.h"

UGGRoadSplineComponent::UGGRoadSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LaneDirection = ELaneDirection::LD_IndexIncreases;
    this->bUseForManagerDistanceCheck = false;
    this->WasFilled = false;
    this->RefillPointData = false;
}


