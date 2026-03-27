#include "GGWorldProgressUserWidget.h"

UGGWorldProgressUserWidget::UGGWorldProgressUserWidget() {
    this->TitleLabelRegular = NULL;
    this->DescriptionLabel = NULL;
    this->ProgressImage = NULL;
    this->ItemIcon = NULL;
    this->ItemIconShadow = NULL;
    this->ScaleBoxContent = NULL;
    this->ProgressMaterialInstance = NULL;
    this->ItemIconCachedTexture = NULL;
}

void UGGWorldProgressUserWidget::UpdateProgressbar(float Percent) {
}

void UGGWorldProgressUserWidget::UpdateItemIconMaterial(UMaterialInterface* Material) {
}

void UGGWorldProgressUserWidget::UpdateItemIcon(UTexture2D* Texture) {
}

void UGGWorldProgressUserWidget::SetUnlockableState(FNotification Notification) {
}

void UGGWorldProgressUserWidget::SetProgressState(int32 Increase, int32 Total) {
}


void UGGWorldProgressUserWidget::OnTotalChaosChanged(int32 NewTotalChaos) {
}


