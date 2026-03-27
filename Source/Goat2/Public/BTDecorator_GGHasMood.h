#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EMoods.h"
#include "BTDecorator_GGHasMood.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGHasMood : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoods MoodToCheckAgainst;
    
public:
    UBTDecorator_GGHasMood();

};

