#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGBase.h"
#include "BTDecorator_GGIsHandcuffed.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGIsHandcuffed : public UBTDecorator_GGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumHandcuffsToCheckFor;
    
    UBTDecorator_GGIsHandcuffed();

};

