#include "GGRadarUserWidgetBase.h"

UGGRadarUserWidgetBase::UGGRadarUserWidgetBase() {
    this->WidgetContainer = NULL;
    this->RadarSystem = NULL;
    this->DefaultWidgetClass = NULL;
    this->WidgetRelevancy = 0;
    this->bDrawDebugInfo = false;
}

void UGGRadarUserWidgetBase::UpdatePointWidget(FRadarCoordinateData Data) {
}

void UGGRadarUserWidgetBase::RemovePointWidget(FRadarCoordinateData Data) {
}

void UGGRadarUserWidgetBase::RefreshPointWidgets() {
}

bool UGGRadarUserWidgetBase::ClearCachedContext() {
    return false;
}

void UGGRadarUserWidgetBase::AddPointWidget(FRadarCoordinateData Data) {
}


