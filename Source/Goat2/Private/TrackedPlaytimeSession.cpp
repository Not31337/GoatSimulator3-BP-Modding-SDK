#include "TrackedPlaytimeSession.h"

FTrackedPlaytimeSession::FTrackedPlaytimeSession() {
    this->SlotIndex = 0;
    this->bCountPlaytime = false;
    this->TimeSinceSave = 0.00f;
}

