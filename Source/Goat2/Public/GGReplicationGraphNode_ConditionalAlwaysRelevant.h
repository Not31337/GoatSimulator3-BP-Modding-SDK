#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "GGReplicationGraphNode_ConditionalAlwaysRelevant.generated.h"

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGReplicationGraphNode_ConditionalAlwaysRelevant : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UGGReplicationGraphNode_ConditionalAlwaysRelevant();

};

