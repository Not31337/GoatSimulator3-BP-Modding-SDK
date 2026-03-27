#pragma once
#include "CoreMinimal.h"
#include "SkeletalPhysicsActorState.generated.h"

class AGGPhysicsActor_Skeletal;

USTRUCT(BlueprintType)
struct GOAT2_API FSkeletalPhysicsActorState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBecomePhysicsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPhysicsActor_Skeletal* SpawnedPhysicsActor;
    
    FSkeletalPhysicsActorState();
};

