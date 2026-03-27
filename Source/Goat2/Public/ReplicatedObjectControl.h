#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "ReplicatedObjectControl.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct FReplicatedObjectControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams ViewTransition;
    
    GOAT2_API FReplicatedObjectControl();
};

