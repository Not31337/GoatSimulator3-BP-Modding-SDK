#include "GGRichTextBlock.h"

UGGRichTextBlock::UGGRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->DecoratorClasses.AddDefaulted(2);
    this->bEnableHoldSoundCues = true;
    this->HoldMID = NULL;
}

bool UGGRichTextBlock::SetTargetUserIndex(int32 InUserIndex) {
    return false;
}

void UGGRichTextBlock::SetOverriddenDefaultStyle(FName OverriddenStyle) {
}

void UGGRichTextBlock::SetHeldDurationOverride(float HeldDuration) {
}

void UGGRichTextBlock::SetEnableHoldSoundCues(bool bEnable) {
}

void UGGRichTextBlock::Refresh() {
}

void UGGRichTextBlock::OnGamepadChanged(bool bGamepadActive) {
}

void UGGRichTextBlock::ListenForGamepadChanges() {
}

UDataTable* UGGRichTextBlock::GetTextStyleSet() const {
    return NULL;
}

FTextBlockStyle UGGRichTextBlock::GetCurrentStyle() const {
    return FTextBlockStyle{};
}


