#include "GGReplicationGraph.h"

UGGReplicationGraph::UGGReplicationGraph() {
    this->GridNode = NULL;
    this->AlwaysRelevantActorsNode = NULL;
    this->SpatialFrequencyNode = NULL;
    this->FrequencyBucketsNode = NULL;
    this->ConditionalIgnoreDistanceCullNode = NULL;
    this->GridCellSize = 10000.00f;
    this->SpatialBiasX = -100000.00f;
    this->SpatialBiasY = -100000.00f;
    this->bDisableSpatialRebuilding = true;
    this->PreallocatedListSize = 2048;
    this->NumPreallocatedLists = 1;
}


