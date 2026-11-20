#include "GGStyleButtonUserWidget.h"

UGGStyleButtonUserWidget::UGGStyleButtonUserWidget() {
    this->StyleImage = NULL;
    this->StyleSelected = NULL;
    this->StyleData = NULL;
}

void UGGStyleButtonUserWidget::SetImageBrushFromSoftTexture(UImage* Image, TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize, bool bHideWhileLoading) {
}

void UGGStyleButtonUserWidget::HandleButtonReleased() {
}

void UGGStyleButtonUserWidget::CancelSoftTextureLoad() {
}


