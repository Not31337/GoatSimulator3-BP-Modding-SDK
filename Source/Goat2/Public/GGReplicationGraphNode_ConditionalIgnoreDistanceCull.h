#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "GGReplicationGraphNode_ConditionalIgnoreDistanceCull.generated.h"

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGReplicationGraphNode_ConditionalIgnoreDistanceCull : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UGGReplicationGraphNode_ConditionalIgnoreDistanceCull();

};

