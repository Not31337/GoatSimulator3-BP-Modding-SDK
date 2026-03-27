#include "GGMobileContextualTouchWidget.h"

UGGMobileContextualTouchWidget::UGGMobileContextualTouchWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ContextualButton = NULL;
    this->IntroSequenceContextualButtonVerticalOffset = 72.50f;
    this->LayoutDefaultWidget = NULL;
    this->PCIntroComponent = NULL;
}

void UGGMobileContextualTouchWidget::OnIntroFinished(AGGIntro* Intro) {
}

void UGGMobileContextualTouchWidget::ContextualButtonPressed() {
}


