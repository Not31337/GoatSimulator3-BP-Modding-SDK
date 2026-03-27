#pragma once
#include "CoreMinimal.h"
#include "GGStolenActor.generated.h"

class AGGPhysicsActor_Base;

USTRUCT(BlueprintType)
struct FGGStolenActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPhysicsActor_Base* PActorPtr;
    
    GOAT2_API FGGStolenActor();
};

