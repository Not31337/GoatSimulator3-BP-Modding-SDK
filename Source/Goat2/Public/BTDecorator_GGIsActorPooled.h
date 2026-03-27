#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGBase.h"
#include "BTDecorator_GGIsActorPooled.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGIsActorPooled : public UBTDecorator_GGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Actor;
    
    UBTDecorator_GGIsActorPooled();

};

