#include "GGTargetOverlayUserWidget.h"

UGGTargetOverlayUserWidget::UGGTargetOverlayUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TextureIsCenterOverlay = NULL;
    this->EaseFunction = EEasingFunc::EaseIn;
    this->TargetType = EGGTargetType::None;
    this->AttachParent = NULL;
    this->OwningWidgetComp = NULL;
    this->Switcher = NULL;
    this->HitChanceSizeBox = NULL;
    this->HitChanceText = NULL;
    this->HitChanceTextImage = NULL;
    this->ActorNameText = NULL;
}


