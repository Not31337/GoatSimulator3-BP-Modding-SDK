#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EReactInitialized.h"
#include "BTTask_GGSetReactInitialized.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGSetReactInitialized : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ReactInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReactInitialized ValueToSet;
    
    UBTTask_GGSetReactInitialized();

};

