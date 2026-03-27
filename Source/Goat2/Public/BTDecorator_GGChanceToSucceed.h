#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_GGChanceToSucceed.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGChanceToSucceed : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToSucceed;
    
public:
    UBTDecorator_GGChanceToSucceed();

};

