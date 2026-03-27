#include "Gamepad.h"

FGamepad::FGamepad() {
    this->GamepadIndex = 0;
    this->bConnected = false;
    this->DisconnectedTimestamp = 0.00f;
}

