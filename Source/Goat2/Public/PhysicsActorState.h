#pragma once
#include "CoreMinimal.h"
#include "PhysicsActorState.generated.h"

class AGGPhysicsActor;

USTRUCT(BlueprintType)
struct FPhysicsActorState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBecomePhysicsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AGGPhysicsActor> SpawnedPhysicsActor;
    
    GOAT2_API FPhysicsActorState();
};

