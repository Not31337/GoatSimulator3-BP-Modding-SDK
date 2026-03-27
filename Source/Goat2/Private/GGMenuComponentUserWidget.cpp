#include "GGMenuComponentUserWidget.h"

UGGMenuComponentUserWidget::UGGMenuComponentUserWidget() {
    this->bGiveFocusOnSpawn = false;
    this->OwningTab = NULL;
    this->SpawningWidget = NULL;
}

bool UGGMenuComponentUserWidget::RemoveWidget() {
    return false;
}


UGGMenuUserWidget* UGGMenuComponentUserWidget::GetOwningTab() {
    return NULL;
}

UGGMenuUserWidget* UGGMenuComponentUserWidget::GetOwningMenu() {
    return NULL;
}


