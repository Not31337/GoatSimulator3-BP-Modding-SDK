#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGIsGoatEmoting.generated.h"

class UGGGoatEmote;

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGIsGoatEmoting : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatEmote* EmoteToCheckFor;
    
public:
    UBTDecorator_GGIsGoatEmoting();

};

