#include "DuckfeedChannelSettings.h"

FDuckfeedChannelSettings::FDuckfeedChannelSettings() {
    this->Priority = 0;
    this->QueueCapacity = 0;
    this->FlushThresholdEvents = 0;
    this->FlushIntervalSeconds = 0.00f;
    this->MaxEventsPerSecond = 0;
    this->MaxConcurrentSlots = 0;
}

