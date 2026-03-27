#include "NotificationProperties.h"

FNotificationProperties::FNotificationProperties() {
    this->Duration = 0.00f;
    this->Priority = ENotificationPriority::Purge;
    this->Removal = ENotificationRemoval::Permanent;
    this->Timestamp = 0.00f;
    this->bDebug = false;
}

