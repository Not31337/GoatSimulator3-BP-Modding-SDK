#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_NPCWaypoint.generated.h"

class AGGNPCWaypoint;

USTRUCT(BlueprintType)
struct GOAT2_API FWeightedElement_NPCWaypoint : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGGNPCWaypoint> Waypoint;
    
    FWeightedElement_NPCWaypoint();
};

