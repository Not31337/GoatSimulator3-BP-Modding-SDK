#include "GGTiledMinimapWidget.h"

UGGTiledMinimapWidget::UGGTiledMinimapWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->GridPanel = NULL;
    this->LOD0Tile = NULL;
    this->Canvas = NULL;
    this->PreviewMap = NULL;
    this->PreviewLOD = 1;
    this->MinimapSubsystem = NULL;
}


