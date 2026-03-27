#include "GGRadarPointUserWidgetBase.h"

UGGRadarPointUserWidgetBase::UGGRadarPointUserWidgetBase() {
    this->WidgetRelevancy = 0;
    this->WaypointPanel = NULL;
    this->WaypointImage = NULL;
    this->RadarSystem = NULL;
    this->ActorLocationUpdateInterval = 0.10f;
    this->bDistanceFadeEnabled = false;
    this->bEdgeFadeEnabled = false;
    this->FadeCurve = NULL;
    this->FadeFallbackDistance = 5000.00f;
    this->FadeUpdateInterval = 0.00f;
    this->bScaleWithZoom = false;
    this->bDistanceScaleCurveEnabled = false;
    this->ScaleCurve = NULL;
    this->bThroneRoomOverride = true;
    this->bCanBeHighlighted = true;
    this->bCanBecomeWaypoint = false;
    this->RenderOffsetCurve = NULL;
    this->WaypointMaxHeight = 0.00f;
    this->MoveWaypointMinDistance = 0.00f;
    this->MoveWaypointMaxDistance = 0.00f;
    this->bConsiderHeightDifferenceForOffset = false;
    this->PlayerHeightDifferenceRange = 10000.00f;
    this->OwningWidget = NULL;
}

void UGGRadarPointUserWidgetBase::UpdateWidget(const FRadarCoordinateData& Data) {
}

void UGGRadarPointUserWidgetBase::UpdateDistance_Implementation(float Distance) {
}

void UGGRadarPointUserWidgetBase::TickWidget() {
}

bool UGGRadarPointUserWidgetBase::ShouldScaleWithMapZoom_Implementation() {
    return false;
}

void UGGRadarPointUserWidgetBase::SetOwningWidget(UGGRadarUserWidgetBase* InOwningWidget) {
}




bool UGGRadarPointUserWidgetBase::IsPointVisible() const {
    return false;
}

FString UGGRadarPointUserWidgetBase::GetWidgetVisibilityDebugString() {
    return TEXT("");
}

FRadarCoordinateData UGGRadarPointUserWidgetBase::GetCachedData() {
    return FRadarCoordinateData{};
}

FRotator UGGRadarPointUserWidgetBase::GetActorRotation() {
    return FRotator{};
}

FVector UGGRadarPointUserWidgetBase::GetActorLocation() {
    return FVector{};
}

bool UGGRadarPointUserWidgetBase::CanEverBecomeWaypoint() {
    return false;
}

bool UGGRadarPointUserWidgetBase::CanBecomeWaypoint_Implementation() {
    return false;
}

void UGGRadarPointUserWidgetBase::AddedWidget(const FRadarCoordinateData& Data) {
}


