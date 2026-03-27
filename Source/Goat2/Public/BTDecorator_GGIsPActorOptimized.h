#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGBase.h"
#include "BTDecorator_GGIsPActorOptimized.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGIsPActorOptimized : public UBTDecorator_GGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetPActor;
    
    UBTDecorator_GGIsPActorOptimized();

};

