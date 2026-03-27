#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGBase.h"
#include "EGender.h"
#include "BTDecorator_GGIsGender.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGIsGender : public UBTDecorator_GGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGender IsGender;
    
    UBTDecorator_GGIsGender();

};

