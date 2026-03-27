#include "GGMobileHoldButton.h"

UGGMobileHoldButton::UGGMobileHoldButton() : UUserWidget(FObjectInitializer::Get()) {
    this->HoldButton = NULL;
    this->HoldTime = 1.50f;
    this->bIsHolding = false;
}

void UGGMobileHoldButton::HoldReleased() {
}

void UGGMobileHoldButton::HoldPressed() {
}


