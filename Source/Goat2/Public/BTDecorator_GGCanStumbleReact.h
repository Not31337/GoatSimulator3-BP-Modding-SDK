#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGBase.h"
#include "BTDecorator_GGCanStumbleReact.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGCanStumbleReact : public UBTDecorator_GGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SelfActor;
    
    UBTDecorator_GGCanStumbleReact();

};

