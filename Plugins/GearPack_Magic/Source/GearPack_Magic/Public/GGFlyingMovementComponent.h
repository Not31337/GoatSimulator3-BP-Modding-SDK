#pragma once
#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GGFlyingCollisionAvoidance.h"
#include "GGFlyingMovementComponent.generated.h"

class AActor;
class AGGCompanion_Owl;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_MAGIC_API UGGFlyingMovementComponent : public UFloatingPawnMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGFlyingCollisionAvoidance AvoidanceParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedThresholdToOrientateToVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFlyingHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoredActorsForCollisionAvoidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCompanion_Owl* OwlCompanion;
    
    UGGFlyingMovementComponent(const FObjectInitializer& ObjectInitializer);

};

