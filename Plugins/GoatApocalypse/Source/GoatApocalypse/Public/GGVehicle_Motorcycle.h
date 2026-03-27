#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GGSmoothNetInterpolate.h"
#include "GGVehicle.h"
#include "GGVehicleSlipperyStatusEffectParams.h"
#include "GGVehicleSlipperyStatusEffectState.h"
#include "GGMotorcycleHover.h"
#include "GGMotorcycleHoverParams.h"
#include "GGMotorcycleJump.h"
#include "GGMotorcycleJumpParams.h"
#include "GGVehicle_Motorcycle.generated.h"

class UAudioComponent;
class UCapsuleComponent;
class UGGMotorcycleMovementComponent;
class UGGMotorcycleSummoningConfig;
class UGGMotorcycleSummoningPath_AsyncResult;
class UGGVehicleCustomizationComponent;
class UGGVehicleCustomizationDataAsset;
class UGGVehicleEngineComponent;
class UGGVehicleTrailParticles;
class UParticleSystemComponent;
class USoundCue;
class USplineComponent;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGVehicle_Motorcycle : public AGGVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UGGMotorcycleMovementComponent* MotorcycleMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGVehicleCustomizationComponent* VehicleCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ExhaustParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BurnoutParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* BurnoutAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGVehicleEngineComponent* VehicleEngine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGVehicleTrailParticles* TrailParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* LeftStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* RightStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirStabilizationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGMotorcycleSummoningConfig* SummoningConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGMotorcycleJumpParams MotorcycleJumpParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGMotorcycleHoverParams MotorcycleHoverParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MotorcycleHover, meta=(AllowPrivateAccess=true))
    FGGMotorcycleHover MotorcycleHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGSmoothNetInterpolate SummoningSmoothNetInterpolate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandedEffectsVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BodyBoneSimulated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BodyBoneKinematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceInAirForInstinct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirTimeForInstinct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGVehicleSlipperyStatusEffectParams SlipperyStatusEffectParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandSafeMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BoostStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BoostLoopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BoostEndSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MotorcycleJump, meta=(AllowPrivateAccess=true))
    FGGMotorcycleJump MotorcycleJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsStandDeployed, meta=(AllowPrivateAccess=true))
    bool bIsStandDeployed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeStampIsBeingSummoned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGMotorcycleSummoningPath_AsyncResult* SummoningPathResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SummoningSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGVehicleSlipperyStatusEffectState SlipperyStatusEffectState;
    
    AGGVehicle_Motorcycle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerThrowOffPlayers(FVector LaunchVelocity);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerJumpInputRelease();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerJumpInputDown();
    
    UFUNCTION(BlueprintCallable)
    void OnWheelsChanged(UGGVehicleCustomizationDataAsset* NewCustomization, UGGVehicleCustomizationComponent* Component, bool bAsHighlight);
    
    UFUNCTION(BlueprintCallable)
    void OnSavedEquipmentLoaded(TArray<FSoftObjectPath> SoftPaths);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_MotorcycleJump(const FGGMotorcycleJump& OldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MotorcycleHover(const FGGMotorcycleHover& OldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsStandDeployed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPaintChanged(UGGVehicleCustomizationDataAsset* NewCustomization, UGGVehicleCustomizationComponent* Component, bool bAsHighlight);
    
    UFUNCTION(BlueprintCallable)
    void OnBodyKitChanged(UGGVehicleCustomizationDataAsset* NewCustomization, UGGVehicleCustomizationComponent* Component, bool bAsHighlight);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlaySummoningAnimation(float StartAt);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastMotorcycleReachedSurfaceWhileSummoned(FTransform Transform);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastMotorcycleReachedSummoningLocation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MotorcycleResetCustomizations();
    
};

