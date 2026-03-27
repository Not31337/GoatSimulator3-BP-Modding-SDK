#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EGrabbedCheckType.h"
#include "BTDecorator_GGIsGrabbed.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGIsGrabbed : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CheckActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrabbedCheckType CheckType;
    
    UBTDecorator_GGIsGrabbed();

};

