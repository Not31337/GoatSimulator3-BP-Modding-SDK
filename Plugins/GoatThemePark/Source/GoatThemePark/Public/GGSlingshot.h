#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGInteractInterface.h"
#include "GGSplineMeshParams.h"
#include "ESlingshotState.h"
#include "GGSlingshot.generated.h"

class AGGCharacter;
class AGGGoat;
class AGGPlayerController;
class AGGSlingshot;
class UArrowComponent;
class UAudioComponent;
class UCableComponent;
class UGGRadialForceComponent;
class UParticleSystem;
class UPhysicsConstraintComponent;
class USceneComponent;
class USoundBase;
class USphereComponent;
class USplineComponent;
class USplineMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGSlingshot : public AActor, public IGGInteractInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SlingshotMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCableComponent* LeftCable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCableComponent* RightCable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* LaunchArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PouchMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ProjectileArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* PhysicsConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRadialForceComponent* RadialForceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* RubberBandAudioComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ControllingGoat, meta=(AllowPrivateAccess=true))
    AGGGoat* ControllingGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FiringProjectile, meta=(AllowPrivateAccess=true))
    AActor* FiringProjectile;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SpawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SpawnParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LaunchSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LaunchParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PulledRubberBandSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PulledRubberBandParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HoldPouchSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FVector> AltGoatHoldPouchOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TailPouchSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssPouchSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpeedMultiplierRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LaunchInfluenceByPitchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLaunchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlingshotRisingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGSplineMeshParams TrajectoryMeshParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTransform DefaultPouchTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PouchSpringConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitCableElongationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> PullForceFeedbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LaunchForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TargetYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTransform PouchTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PullPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LaunchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LaunchVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PlayerViewPointPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector ConstraintRefPosFrame1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector ConstraintRefPosFrame2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PouchSpringDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsHolding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReadyLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionResponse> IKCollisionResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> TrajectoryMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    ESlingshotState CurrentState;
    
public:
    AGGSlingshot(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTrajectorySpline(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateSlingshotRotation();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePouchTransform(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetFiringProjectile(AActor* NewProjectile);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentState(ESlingshotState NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetControllingGoat(AGGGoat* NewControlling);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintPositions(const FVector PosFrame1, const FVector PosFrame2);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdatePlayerViewPointPitch(float ViewPointPitch);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseSlingshot(AActor* ActorToRelease);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_FiringProjectile();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ControllingGoat();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeadbuttInputDown(AGGPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterRespawned(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastUpdateSlingshotPositions(float NewSlingshotYaw, FTransform NewPouchTransform);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastUpdatePlayerViewPointPitch(float ViewPointPitch);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastUpdateConstraintPositions(const FVector PosFrame1, const FVector PosFrame2);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetSlingshotInUse(AGGSlingshot* SlingshotInUse, AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlaySpawnHapticsAndEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayPullHapticsAndEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayLaunchHapticsAndEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastBreakConstraint();
    
public:
    UFUNCTION(BlueprintCallable)
    void Launch_Implementation(AActor* Launcher);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Launch(AActor* Launcher);
    
    UFUNCTION(BlueprintCallable)
    bool IsCurrentlyInUse_Implementation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsCurrentlyInUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlingshotState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroySlingshot();
    
    UFUNCTION(BlueprintCallable)
    bool CanLaunch_Implementation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanLaunch() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CalculateImpulse();
    
    UFUNCTION(BlueprintCallable)
    void AddDragResistance();
    

    // Fix for true pure virtual functions not being implemented
};

