#pragma once
#include "CoreMinimal.h"
#include "EGGTentacleState.h"
#include "GGTentacle.generated.h"

class AActor;
class UPhysicsConstraintComponent;
class USphereComponent;

USTRUCT(BlueprintType)
struct GOATTHEMEPARK_API FGGTentacle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TentacleSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGTentacleState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* PhysicsConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* GrabAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentGrabbedWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Targets;
    
    FGGTentacle();
};

