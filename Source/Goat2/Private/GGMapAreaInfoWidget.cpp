#include "GGMapAreaInfoWidget.h"

UGGMapAreaInfoWidget::UGGMapAreaInfoWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MapWidget = NULL;
    this->bCountRampsNative = true;
}

void UGGMapAreaInfoWidget::UpdateMapAreaStatsForContextActor(AActor* AreaInfoContextActor) {
}

void UGGMapAreaInfoWidget::UpdateAreaInfo() {
}

void UGGMapAreaInfoWidget::SetMapWidget(UGGMapUserWidget* InMapWidget) {
}


void UGGMapAreaInfoWidget::OnFogOverlayHovered_Implementation(AActor* AreaInfoContextActor) {
}

void UGGMapAreaInfoWidget::AppendCurrentAreaInfo(const FString& Key, FMapAreaStat AreaStat) {
}


