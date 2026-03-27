#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "GGReplicationGraphNode_DynamicSpatialFrequency.generated.h"

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_DynamicSpatialFrequency {
    GENERATED_BODY()
public:
    UGGReplicationGraphNode_DynamicSpatialFrequency();

};

