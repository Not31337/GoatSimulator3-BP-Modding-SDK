#include "GGScrollBox.h"
#include "Widgets/Layout/SScrollBox.h"

UGGScrollBox::UGGScrollBox() {
    this->bAnimateWheelScrolling = true;
    this->ScrollWhenFocusChanges = EScrollWhenFocusChanges::AnimatedScroll;
    this->bUseGamepadAnalogScrolling = true;
    this->bUseLeftGamepadAnalogScrolling = false;
    this->GamepadAnalogScrollMultiplier = 60.00f;
    this->bUseExplicitDPadScrolling = false;
    this->ExplicitDPadScrollAmount = 30.00f;
    this->bScrollIntoViewGamepadOnly = true;
}


