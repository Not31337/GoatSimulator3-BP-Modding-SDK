#pragma once
#include "CoreMinimal.h"
#include "GGNPCWaypoint.h"
#include "GGNPCWaypoint_WorldInteraction.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGNPCWaypoint_WorldInteraction : public AGGNPCWaypoint {
    GENERATED_BODY()
public:
    AGGNPCWaypoint_WorldInteraction(const FObjectInitializer& ObjectInitializer);

};

