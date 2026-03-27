#include "GGLoadingScreen.h"

UGGLoadingScreen::UGGLoadingScreen() {
    this->bReturnShouldCloseMenu = false;
    this->LoadingScreenHintDataTable = NULL;
    this->bListenToPostLoadMapCallback = false;
    this->MobileRoundedEdgePaddingPercentage = 10.00f;
}

void UGGLoadingScreen::OnPostLoadMapWithWorld(UWorld* World) {
}


FLoadingScreenHint UGGLoadingScreen::GetRandomLoadingScreenHintFromRows(const TArray<FDataTableRowHandle>& Hints) {
    return FLoadingScreenHint{};
}

FLoadingScreenHint UGGLoadingScreen::GetRandomDefaultLoadingScreenHint() {
    return FLoadingScreenHint{};
}

FText UGGLoadingScreen::GetHintDescriptionFromHint(const FLoadingScreenHint& Hint) const {
    return FText::GetEmpty();
}

float UGGLoadingScreen::CalculateMobilePadding() const {
    return 0.0f;
}


