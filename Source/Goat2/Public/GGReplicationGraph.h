#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "GGReplicationGraph.generated.h"

class UGGReplicationGraphNode_ConditionalIgnoreDistanceCull;
class UReplicationGraphNode_ActorList;
class UReplicationGraphNode_ActorListFrequencyBuckets;
class UReplicationGraphNode_DynamicSpatialFrequency;
class UReplicationGraphNode_GridSpatialization2D;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class GOAT2_API UGGReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_GridSpatialization2D* GridNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_ActorList* AlwaysRelevantActorsNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_DynamicSpatialFrequency* SpatialFrequencyNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_ActorListFrequencyBuckets* FrequencyBucketsNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGReplicationGraphNode_ConditionalIgnoreDistanceCull* ConditionalIgnoreDistanceCullNode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridCellSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpatialBiasX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpatialBiasY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSpatialRebuilding;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreallocatedListSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPreallocatedLists;
    
public:
    UGGReplicationGraph();

};

