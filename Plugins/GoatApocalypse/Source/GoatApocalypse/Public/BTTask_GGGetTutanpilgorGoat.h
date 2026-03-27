#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_GGGetTutanpilgorGoat.generated.h"

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UBTTask_GGGetTutanpilgorGoat : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CurrentEvent;
    
    UBTTask_GGGetTutanpilgorGoat();

};

