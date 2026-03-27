#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "BTDecorator_GGBase.h"
#include "BTDecorator_GGCheckWaypointTag.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGCheckWaypointTag : public UBTDecorator_GGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Waypoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToCheckFor;
    
    UBTDecorator_GGCheckWaypointTag();

};

