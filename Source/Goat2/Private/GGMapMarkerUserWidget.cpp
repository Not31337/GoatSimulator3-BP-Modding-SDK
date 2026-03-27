#include "GGMapMarkerUserWidget.h"

UGGMapMarkerUserWidget::UGGMapMarkerUserWidget() {
    this->DetailsPanelOffsetY = 0.00f;
    this->bCanTeleport = false;
    this->MapMarker = NULL;
    this->MapMarkerBG = NULL;
    this->HoverAnim = NULL;
    this->RevealAnim = NULL;
}

bool UGGMapMarkerUserWidget::OnMarkerInteractedWith_Implementation(bool bHold) {
    return false;
}

FText UGGMapMarkerUserWidget::GetMarkerDescription_Implementation() {
    return FText::GetEmpty();
}

FText UGGMapMarkerUserWidget::GetCurrentWaypointHint_Implementation() {
    return FText::GetEmpty();
}


