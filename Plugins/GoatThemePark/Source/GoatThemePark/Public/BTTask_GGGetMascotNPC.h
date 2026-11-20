#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_GGGetMascotNPC.generated.h"

UCLASS(Blueprintable)
class GOATTHEMEPARK_API UBTTask_GGGetMascotNPC : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CurrentEvent;
    
public:
    UBTTask_GGGetMascotNPC();

};

