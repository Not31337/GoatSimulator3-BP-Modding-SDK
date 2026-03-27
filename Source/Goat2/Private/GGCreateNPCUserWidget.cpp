#include "GGCreateNPCUserWidget.h"

UGGCreateNPCUserWidget::UGGCreateNPCUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->NPCName = TEXT("Default");
    this->NPCVisualizer = NULL;
}

AGGNPC* UGGCreateNPCUserWidget::SpawnNPC() {
    return NULL;
}


