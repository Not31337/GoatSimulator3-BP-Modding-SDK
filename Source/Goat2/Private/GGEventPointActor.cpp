#include "GGEventPointActor.h"
#include "GGEventPointComponent.h"

AGGEventPointActor::AGGEventPointActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventPointComponent = CreateDefaultSubobject<UGGEventPointComponent>(TEXT("EventPoint"));
    this->DiscoverQuestBroadcastRadius = 0.00f;
    this->CompletionBroadcastRadius = 0.00f;
    this->NearestQuestSearchRadius = 0.00f;
    this->ProgressBroadcastRadius = 0.00f;
}


