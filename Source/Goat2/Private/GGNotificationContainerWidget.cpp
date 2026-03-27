#include "GGNotificationContainerWidget.h"

UGGNotificationContainerWidget::UGGNotificationContainerWidget() {
    this->WidgetClassesDataTable = NULL;
    this->DefaultWidgetClass = NULL;
    this->WidgetContainer = NULL;
    this->bFillWidgetContainer = false;
    this->DefaultClearTimerDuration = 2.50f;
    this->ActiveWidget = NULL;
}

void UGGNotificationContainerWidget::ForceClear() {
}


