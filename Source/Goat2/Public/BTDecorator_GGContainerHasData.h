#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGBase.h"
#include "EEnvContainerData.h"
#include "BTDecorator_GGContainerHasData.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGContainerHasData : public UBTDecorator_GGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnvContainerData DataToCheckFor;
    
    UBTDecorator_GGContainerHasData();

};

