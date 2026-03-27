#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGIsVendorAtStall.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGIsVendorAtStall : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CurrentEvent;
    
public:
    UBTDecorator_GGIsVendorAtStall();

};

