#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GGCharacterMovementComponent.h"
#include "OnNPCOverlappStaticDelegate.h"
#include "GGNPCMovementComponent.generated.h"

class AGGNPC;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGNPCMovementComponent : public UGGCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkFixedPathBrakingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunFixedPathBrakingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnInPlaceRotationSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetworkSimulatedSmoothLocationTimeRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBroadcastNavWalkOverlappedStatic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCOverlappStatic OnNPCOverlappStatic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* OwnerNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult PrevCachedNavMeshProject;
    
public:
    UGGNPCMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetProjectNavMeshWalking(bool bNewShouldProject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseFixedBrakingDistanceForPaths() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFixedPathBrakingDistance() const;
    
};

