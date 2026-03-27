#include "GGMegaRiftProgressUserWidget.h"

UGGMegaRiftProgressUserWidget::UGGMegaRiftProgressUserWidget() {
    this->ProgressImageProgressParameter = TEXT("Progress");
    this->RiftIncreasedTitleText = FText::FromString(TEXT("Multiverse Instability Increased"));
    this->RiftOpenedTitleText = FText::FromString(TEXT("Rift Opened!"));
    this->RiftIncreasedDescriptionText = FText::FromString(TEXT("Press <keybind action=\"PauseMenu\"/> to see your progress"));
    this->RiftOpenedDescriptionText = FText::FromString(TEXT("Go to the rift to enter"));
    this->ScaleBox_Progress = NULL;
    this->ScaleBox_Title = NULL;
    this->ScaleBox_Description = NULL;
    this->TitleLabel = NULL;
    this->OrbImage = NULL;
    this->LightningImage_Top = NULL;
    this->LightningImage_Bottom = NULL;
}


