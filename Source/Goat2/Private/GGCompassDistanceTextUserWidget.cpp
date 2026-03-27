#include "GGCompassDistanceTextUserWidget.h"

UGGCompassDistanceTextUserWidget::UGGCompassDistanceTextUserWidget() {
    this->DistanceLabel = NULL;
    this->PC = NULL;
    this->bShouldUpdate = false;
    this->WaypointRemovalDistanceMobile = 0.00f;
}

void UGGCompassDistanceTextUserWidget::UpdateRadarData(FRadarCoordinateData InData, AGGPlayerController* InPC) {
}

FText UGGCompassDistanceTextUserWidget::GetDistanceText() {
    return FText::GetEmpty();
}


