#include "GGMapUserWidget.h"

UGGMapUserWidget::UGGMapUserWidget() {
    this->bIsFocusable = true;
    this->MapContainer = NULL;
    this->MapZoomCanvas = NULL;
    this->WidgetLayers = NULL;
    this->TiledMapBackground = NULL;
    this->MapCanvasBackground = NULL;
    this->MapCrosshair = NULL;
    this->DetailsOverlay = NULL;
    this->MapDetailsPanelWidget = NULL;
    this->InfoWidget = NULL;
    this->HightlightedMarkerTolerance = 25.00f;
    this->HightlightedMarkerToleranceMobile = 50.00f;
    this->bRadarWaypointsEnabled = true;
    this->MarkerScaleGlobal = 0.52f;
    this->MarkerScaleGlobalMobile = 1.10f;
    this->MarkerScaleGlobalMobile43 = 0.90f;
    this->StartingZoom = 1.75f;
    this->ZoomIntervalMouseWheel = 0.50f;
    this->ZoomIntervalMobilePinch = 0.10f;
    this->ZoomIntervalMouseWheelCurve = NULL;
    this->ZoomInterpSpeed = 5.00f;
    this->ZoomInterpSpeedCurve = NULL;
    this->bInertialMapMovementEnabled = true;
    this->MaxOutsideLimitsSpeed = 10000.00f;
    this->MaxOutsideLimitsMaxDist = 500.00f;
    this->GamepadMapSpeed = 1000.00f;
    this->GamepadCurveAcceleration = 1.00f;
    this->GamepadCurveDeceleration = 10.00f;
    this->GamepadSpeedCurve = NULL;
    this->RevealAnimInitialDelay = 1.00f;
    this->RevealAnimDelay = 0.20f;
    this->GamepadMapSpeedHighlightModifier = 0.70f;
    this->GamepadZoomSpeed = 3.00f;
    this->GamepadZoomSpeedCurve = NULL;
    this->GamepadWidgetFocusSpeed = 5.00f;
    this->GamepadDeadZone = 0.10f;
    this->ZoomMinLimit = 0.45f;
    this->ZoomMaxLimit = 12.00f;
    this->WaypointPlacementDistanceThreshold = 10.00f;
    this->WaypointPlacementTimeThreshold = 1.00f;
    this->InteractHoldInputTimeThreshold = 1.50f;
    this->HoveredAreaContextActor = NULL;
    this->InteractButtonDownTimestamp = 0.00f;
    this->CurrentGamepadCurveSpeed = 0.00f;
    this->MouseDownTimestamp = 0.00f;
    this->TargetZoom = 0.00f;
    this->LastZoomAnalogValue = 0.00f;
    this->CurrentHighlightedMapMarker = NULL;
    this->bInvalidateNextFrame = false;
    this->bDidAnalogueMovementThisFrame = false;
    this->bDidAnalogueMovementLastFrame = false;
    this->MinimapSubsystem = NULL;
    this->TouchedButton = NULL;
}

bool UGGMapUserWidget::UpdateWaypoint() {
    return false;
}

void UGGMapUserWidget::UpdateInfoWidget(AActor* RadarActor, UGGMapMarkerUserWidget* MapMarkerUserWidget) {
}

bool UGGMapUserWidget::UpdateInertialMovement(float DeltaTime) {
    return false;
}

void UGGMapUserWidget::UpdateFogOverlays() {
}

void UGGMapUserWidget::UnfreezeMap() {
}

void UGGMapUserWidget::StopDragging() {
}

void UGGMapUserWidget::StartDragging() {
}

bool UGGMapUserWidget::ShouldPlaceWaypoint(FVector2D MousePos) const {
    return false;
}

void UGGMapUserWidget::SetZoomLevel(float Zoom) {
}

void UGGMapUserWidget::SetOverlayButtonHovered(int32 OverlayIndex, bool bHovered) {
}

void UGGMapUserWidget::RevealNewMarkers() {
}

void UGGMapUserWidget::RefreshInfoWidget() {
}

void UGGMapUserWidget::PlaceWaypointOnMapPos_Implementation(FVector2D MapPos) {
}

void UGGMapUserWidget::OnOverlayButtonUnHovered() {
}

void UGGMapUserWidget::OnOverlayButtonReleased() {
}

void UGGMapUserWidget::OnOverlayButtonPressed() {
}

void UGGMapUserWidget::OnOverlayButtonMouseMoved(FVector2D ScreenSpaceTouchPosition) {
}

bool UGGMapUserWidget::IsMapPointNearCursor(FVector2D MapPosition, float Tolerance) {
    return false;
}

bool UGGMapUserWidget::IsMapPointNearCenter(FVector2D MapPosition, float Tolerance) {
    return false;
}

bool UGGMapUserWidget::IsMapPointNearActiveWaypoint(const FVector2D& MapPosition, float Tolerance) const {
    return false;
}

bool UGGMapUserWidget::IsDragging() const {
    return false;
}

TArray<UObject*> UGGMapUserWidget::GetNewMarkerObjects() {
    return TArray<UObject*>();
}

FVector2D UGGMapUserWidget::GetMapPositionFromViewportPosition(FVector2D ViewportPosition) {
    return FVector2D{};
}

FVector2D UGGMapUserWidget::GetMapPositionFromContainerPosition(FVector2D MapPosition) {
    return FVector2D{};
}

UGGMapMarkerUserWidget* UGGMapUserWidget::GetMapMarkerNearCursor(FVector2D MapPosition, float Tolerance) {
    return NULL;
}

FVector2D UGGMapUserWidget::GetGamepadPositionOnMap() const {
    return FVector2D{};
}

float UGGMapUserWidget::GetCurrentZoomLevel() const {
    return 0.0f;
}

FVector2D UGGMapUserWidget::GetCurrentWidgetRenderScale() const {
    return FVector2D{};
}

FVector2D UGGMapUserWidget::GetCurrentMapTranslation() const {
    return FVector2D{};
}

FVector2D UGGMapUserWidget::GetCurrentMapPosition() const {
    return FVector2D{};
}

FVector2D UGGMapUserWidget::GetContainerPositionFromMapPosition(FVector2D MapPosition, bool bLimitToContainer) {
    return FVector2D{};
}

TArray<UGGButton*> UGGMapUserWidget::GetAllAreaButtons_Implementation() {
    return TArray<UGGButton*>();
}

void UGGMapUserWidget::FreezeMap(bool bPermanent) {
}

void UGGMapUserWidget::CenterWithContext(AActor* ContextActor, float ZoomLevel) {
}

void UGGMapUserWidget::CenterMapOnPlayer() {
}

void UGGMapUserWidget::CenterMapOnObjects(TArray<UObject*> Objects, bool bIgnoreVisibility, float ZoomLevel) {
}

bool UGGMapUserWidget::CenterMapOnObject(UObject* Object, bool bIgnoreVisibility, float ZoomLevel) {
    return false;
}


