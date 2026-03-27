#include "GGPlayerSubtitleComponent.h"

UGGPlayerSubtitleComponent::UGGPlayerSubtitleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AdditionalSubtitleDisplayTime = 0.50f;
    this->MinClosedCaptionDisplayTime = 1.50f;
    this->AudibleSoundThreshold = 0.20f;
    this->SubtitlePriorityThreshold = 10000.00f;
    this->OwningController = NULL;
}

void UGGPlayerSubtitleComponent::SetSubtitlePriority(float InPriority) {
}

void UGGPlayerSubtitleComponent::ResetSubtitlePriority() {
}

void UGGPlayerSubtitleComponent::RemoveSubtitleNotification(const FString& NotificationID, bool bIsClosedCaption) const {
}

void UGGPlayerSubtitleComponent::OnSubtitlesSettingChanged(FGGGameSetting& InSetting) {
}

void UGGPlayerSubtitleComponent::CreateSubtitleNotification(FText ActiveSubtitleText, const FString& NotificationID, float Duration, bool bIsClosedCaption) const {
}


