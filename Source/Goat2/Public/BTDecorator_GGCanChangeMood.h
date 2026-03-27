#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGBase.h"
#include "EMoods.h"
#include "BTDecorator_GGCanChangeMood.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGCanChangeMood : public UBTDecorator_GGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoods MoodToChangeToo;
    
    UBTDecorator_GGCanChangeMood();

};

