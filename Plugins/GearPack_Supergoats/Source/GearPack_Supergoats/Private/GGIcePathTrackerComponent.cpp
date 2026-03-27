#include "GGIcePathTrackerComponent.h"

UGGIcePathTrackerComponent::UGGIcePathTrackerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerPlayer = NULL;
    this->PathOverLimit = NULL;
}

void UGGIcePathTrackerComponent::OnPathEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


