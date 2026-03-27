#include "GGRiftUserComponent.h"

UGGRiftUserComponent::UGGRiftUserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTeleportAsSoonAsReady = false;
    this->CurrentTransition = NULL;
}

UGGRiftUserComponent* UGGRiftUserComponent::GetRiftUserComponent(const AGGPlayerController* Player) {
    return NULL;
}

void UGGRiftUserComponent::ClientAbortRiftTransition_Implementation() {
}


