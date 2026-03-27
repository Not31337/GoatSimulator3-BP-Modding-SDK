#pragma once
#include "CoreMinimal.h"
#include "EGGTheCuberState.h"
#include "GGTheCuberReplicatedVariables.generated.h"

class AActor;
class AGGPhysicsActor_CompactedCube;

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGTheCuberReplicatedVariables {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGTheCuberState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPhysicsActor_CompactedCube* Cube;
    
    FGGTheCuberReplicatedVariables();
};

