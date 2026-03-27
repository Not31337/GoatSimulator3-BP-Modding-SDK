#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_ActorAttachment.h"
#include "WeightedElement_BehaviorActor.generated.h"

class AActor;
class UAnimMontage;

USTRUCT(BlueprintType)
struct FWeightedElement_BehaviorActor : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditPickupActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_ActorAttachment> PickupActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PickupAnimation;
    
    GOAT2_API FWeightedElement_BehaviorActor();
};

