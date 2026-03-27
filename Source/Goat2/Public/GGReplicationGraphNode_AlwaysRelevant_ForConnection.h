#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "GGReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

class AGGCastleStretchGoal;
class AGGGoatTower;
class APawn;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_AlwaysRelevant_ForConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* VehicleConnectionIsPassengerIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoatTower* GoatTowerBeingSynced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCastleStretchGoal* StretchGoalBeingSynced;
    
    UGGReplicationGraphNode_AlwaysRelevant_ForConnection();

};

