#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGTimeSinceMoodSet.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGTimeSinceMoodSet : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceMoodWasSet;
    
    UBTDecorator_GGTimeSinceMoodSet();

};

