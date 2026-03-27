#include "GGStuntsUserWidget.h"

UGGStuntsUserWidget::UGGStuntsUserWidget() {
    this->ProgressTextFormat = FText::FromString(TEXT("{Current} / {Max} {AreaName} {StuntNames} found"));
    this->TrinketStuntName = FText::FromString(TEXT("Trinket collected!"));
    this->TrinketPluralName = FText::FromString(TEXT("Trinkets"));
    this->RampStuntName = FText::FromString(TEXT("Ramp discovered!"));
    this->RampPluralName = FText::FromString(TEXT("Ramps"));
    this->BrokenRelicIcon = NULL;
    this->VehicleCollectibleIcon = NULL;
    this->FallbackStuntName = FText::FromString(TEXT("Stunt"));
    this->FallbackPluralName = FText::FromString(TEXT("Collectibles"));
    this->BodyLabel = NULL;
    this->BodyLabelRich = NULL;
    this->Icon = NULL;
    this->ScaleBoxContent = NULL;
    this->AnimShowWidgetStunt = NULL;
    this->AnimHideWidgetStunt = NULL;
    this->QuestTypeTexture = NULL;
}


